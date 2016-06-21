// Copyright (c) 2015-2016 Nathan Bass "IngCr3at1on"
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "base58.h"
#include "util.h"
#include "reactors.h"

using namespace std;

int CURRENT_REACTOR_VERSION = 1;
unsigned int REACTOR_FIX_TIME = 1466337600; // 19 Jun 2016 12:00:00 UTC
unsigned int REACTOR_TEST_FIX_TIME = 1464123019; // Tue, 24 May 2016 20:50:19 GMT

bool maybeWipeReactorDB(string strFileName) {
    int dbversion;
    if (CReactorDB(strFileName).CheckReactorDBVersion(dbversion)) {
        if (dbversion == CURRENT_REACTOR_VERSION)
            return false;
    }

    // No version set or version is invalid, wipe the DB.
    printf("maybeWipeReactorDB() : reactor databse is outdated, removing for recreation\n");
    CReactorDB(strFileName).Close();
    bitdb.CloseDb("reactors.dat");
    boost::filesystem::remove(strFileName);
    // Return true so we know to re-inflate the DB.
    return true;
}

/* This function should not be called by tests (is not currently required for
 * them) as it will use the reactor.dat found in the datadir instead of the
 * mockdb. */
void InitReactors() {
    bool inflatedb = false;
    // Check if the reactor database exists and check the version if it does.
    string reactordbfile = GetReactorDBFile();
    if (boost::filesystem::exists(boost::filesystem::path(reactordbfile))) {
        if (maybeWipeReactorDB(reactordbfile))
            inflatedb = true;

        if (!inflatedb) {
            // TODO Replace with correct first and last reactor addresses.
            if (!fTestNet && (!CReactorDB(reactordbfile).CheckReactorAddr(string("dasHERZmwgtvWGNRxs55GPrXsAKwY7bX85"))
                || !CReactorDB(reactordbfile).CheckReactorAddr(string("dMd36o4YfLwRy1WqoyPc9DXRKkviDsMj5h"))))
                inflatedb = true;
            else if (fTestNet && (!CReactorDB(reactordbfile).CheckReactorAddr(string("muLhTBAfaS2ro2fhDFh6D7MArg6qGv1j1i"))
                || !CReactorDB(reactordbfile).CheckReactorAddr(string("mkB4XAhFZmG5rNuhs4mnnBFWN3jKD2rXw2"))))
                inflatedb = true;
        }
    } else {
        inflatedb = true;
    }

    if (inflatedb)
        InflateReactorDB(reactordbfile);
}

bool CTransaction::IsReactorStake(string strFileName, CScript scriptPubKeyType, CScript scriptPubKeyAddress, unsigned int nTime, int64 nValueIn, int64 nValueOut, uint64 nCoinAge, unsigned int nBits, int nHeight) {
    int64 nStakeReward = nValueOut - nValueIn;

    // Should never be anything else.
    if (scriptPubKeyType[0] == OP_REACTOR) {
        unsigned int valid_starting;
        unsigned int valid_until;
        int64 reactorStakeValue;

        /* Destination address is stored in the CScript for vout[1] of the input
         * so extract it against our database. */
        if (!CReactorDB(strFileName).IsReactor(strFileName, scriptPubKeyAddress, reactorStakeValue, valid_starting, valid_until))
            return DoS(100, error("IsReactorStake() : invalid reactor address, HAXORS!!!"));

        if (nTime < valid_starting)
            return DoS(100, error("IsReactorStake() : reactor is not valid yet"));

        if (nTime >= valid_until && valid_until != (unsigned int)-1)
            return DoS(100, error("IsReactorStake() : reactor is expired"));

        /* If this is a reactor check that the size of the stake matches the
         * requirements of the given reactor.*/
        if (nValueIn < (reactorStakeValue * COIN))
            return DoS(100, error("IsReactorStake() : credit doesn't meet requirement for reactor stake; credit %" PRI64d "; reactor size %" PRI64d "", nValueIn, reactorStakeValue));

        if (nValueIn > ((reactorStakeValue * COIN * 2) - 1 * COIN))
            return DoS(100, error("IsReactorStake() : credit exceeds value of reactor; credit %" PRI64d "; reactor size %" PRI64d "", nValueIn, reactorStakeValue));

        if (nStakeReward > GetProofOfStakeReward(nCoinAge, nBits, nTime, nHeight, GetReactorRate(reactorStakeValue, nValueIn)) - GetMinFee() + MIN_TX_FEE)
            return DoS(100, error("IsReactorStake() : %s stake reward exceeded", GetHash().ToString().substr(0, 10).c_str()));

        return true;
    }

    return false;
}

// Inflate the reactor table in the reactorDB
void InflateReactorDB(string strFileName) {
    printf("InflateReactorDB() : inflating reactor database.\n");

    fTestNet ? CReactorDB(strFileName, "cw+").WriteTestReactorDB() : CReactorDB(strFileName, "cw+").WriteReactorDB();
}

float GetReactorRate(int64 reactorStakeValue, int64 nValueIn) {
    unsigned int fix_time = REACTOR_FIX_TIME;
    if (fTestNet)
        fix_time = REACTOR_TEST_FIX_TIME;

if(reactorStakeValue == 100) {
   if(GetTime() > fix_time) return(1.20);
   else return(1.05);
}

    if (reactorStakeValue == 1000 || reactorStakeValue == 10000)
        return 2;

    /* Originally the spec for the legendaries made it sound like they could
     * have one or the other value (instead of being set to one specifically),
     * this segment of code was overlooked in previous updates...
     * While this check is probably not necessary we'll do it anyway as a sanity
     * check to ensure that we don't inadvertently cause mini-forks. */
    if (GetTime() < fix_time) {
        if (reactorStakeValue == 15000 && nValueIn == 3000 * COIN)
            return 2;
    } else {
        if (reactorStakeValue == 3000)
            return 2;
    }

    if (GetTime() < fix_time) {
        if (reactorStakeValue == 15000 && nValueIn == 15000 * COIN)
            return 1.25;
    } else {
        if (reactorStakeValue == 15000)
            return 1.25;
    }

    return 0;
}

int64 GetAdjustedCoinYear(int64 nRewardCoinYear, float reactorRate) {
    unsigned int fix_time = REACTOR_FIX_TIME;
    if (fTestNet)
        fix_time = REACTOR_TEST_FIX_TIME;
    /* For 30 days after the fix_time we want to boost the normal stake rate
     * by 30%. */
    if (GetTime() >= fix_time && GetTime() < fix_time+(60*60*24*30)) {
        nRewardCoinYear = 30 * CENT;
        }    
    /* If the reactor rate is greater than 0 adjust the nRewardCoinYear by
     * the given rate. */
    if (reactorRate > 0) {
        // If prior to fix cast reactorRate to int to avoid mini-forks.
        if (GetTime() < fix_time) {
            nRewardCoinYear = nRewardCoinYear * (int)reactorRate;
        } else {
            nRewardCoinYear = nRewardCoinYear * reactorRate;
        }
    }

    return nRewardCoinYear;
}

bool CReactorDB::WriteReactorDBVersion(int version)
{
    return Write(string("dbversion"), version);
}

bool CReactorDB::WriteReactorAddr(const string address, unsigned int valid_starting, unsigned int valid_until, int64 reactorStakeValue)
{
    return Write(make_pair(string("reactor"), address), boost::make_tuple(valid_starting, valid_until, reactorStakeValue));
}

bool CReactorDB::CheckReactorDBVersion(int &version)
{
    if (!Exists(string("dbversion")))
        return false;

    Read(string("dbversion"), version);
    return true;
}

bool CReactorDB::CheckReactorAddr(const string address)
{
    return Exists(make_pair(string("reactor"), address));
}

bool CReactorDB::IsReactor(std::string strFileName, CScript scriptPubKeyAddress, int64 &reactorStakeValue, unsigned int &valid_starting, unsigned int &valid_until)
{
    CTxDestination address;
    ExtractDestination(scriptPubKeyAddress, address);
    CBitcoinAddress addr(address);

    // Check if the address exists in the reactor database.
    if (!CReactorDB(strFileName).CheckReactorAddr(addr.ToString()))
        return false;

    boost::tuple<unsigned int, unsigned int, int64> t;
    Read(make_pair(string("reactor"), addr.ToString()), t);

    valid_starting = t.get<0>();
    valid_until = t.get<1>();

    reactorStakeValue = t.get<2>();
    return true;
}
