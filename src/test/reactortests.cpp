#include <boost/test/unit_test.hpp>

#include "base58.h"
#include "main.h"
#include "reactors.h"

using namespace std;

BOOST_AUTO_TEST_SUITE(reactor_tests)

BOOST_AUTO_TEST_CASE(reactor_validity)
{
    CScript scriptPubKeyAddress;
    CScript scriptReactorOP;
    string strReactorValid = "dMd36o2f1xpRqjbhtJzzMQKFCnrPmkY35W";
    string strReactorValid2 = "dMd36oZL8CnJKVbsUxtaGLzMzyofKSFqMn";
    string strReactorInvalid = "dVSWVAnKL4BzVBAAvVDbatWfKeEpxXnLXT";

    scriptReactorOP << OP_REACTOR;

    // Empty database, returns false.
    BOOST_CHECK(!CReactorDB("reactors.dat").CheckReactorAddr(strReactorValid));
    BOOST_CHECK(!CReactorDB("reactors.dat").CheckReactorAddr(strReactorInvalid));

    // Inflate the database.
    InflateReactorDB("reactors.dat");

    BOOST_CHECK(CReactorDB("reactors.dat").CheckReactorAddr(strReactorValid));
    BOOST_CHECK(!CReactorDB("reactors.dat").CheckReactorAddr(strReactorInvalid));

    CBitcoinAddress addr(strReactorValid);
    scriptPubKeyAddress.SetDestination(addr.Get());

    CTransaction tx;
    BOOST_CHECK(tx.IsReactorStake("reactors.dat", scriptReactorOP, scriptPubKeyAddress, REACTOR_START_TIME, 1000 * COIN, 0, 0, 0, 0));
    // Value exceeds max stakeable balance of address (reactorStakeValue)
    BOOST_CHECK(!tx.IsReactorStake("reactors.dat", scriptReactorOP, scriptPubKeyAddress, REACTOR_START_TIME, 1000 * COIN + 1, 0, 0, 0, 0));
    // Value in is too low for reactor
    BOOST_CHECK(!tx.IsReactorStake("reactors.dat", scriptReactorOP, scriptPubKeyAddress, REACTOR_START_TIME, 1000 * COIN - 1, 0, 0, 0, 0));
    // Excessive reward.
    BOOST_CHECK(!tx.IsReactorStake("reactors.dat", scriptReactorOP, scriptPubKeyAddress, REACTOR_START_TIME, 1000 * COIN, 1500 * COIN, 0, 0, 0));

    // Invalid reactor address
    addr = CBitcoinAddress(strReactorInvalid);
    scriptPubKeyAddress.clear();
    scriptPubKeyAddress.SetDestination(addr.Get());
    BOOST_CHECK(!tx.IsReactorStake("reactors.dat", scriptReactorOP, scriptPubKeyAddress, REACTOR_START_TIME, 1000 * COIN, 0, 0, 0, 0));

    // Not yet valid
    addr = CBitcoinAddress(strReactorValid2);
    scriptPubKeyAddress.clear();
    scriptPubKeyAddress.SetDestination(addr.Get());
    BOOST_CHECK(!tx.IsReactorStake("reactors.dat", scriptReactorOP, scriptPubKeyAddress, REACTOR_START_TIME, 1000 * COIN, 0, 0, 0, 0));

    // Expired
    addr = CBitcoinAddress(strReactorValid);
    scriptPubKeyAddress.clear();
    scriptPubKeyAddress.SetDestination(addr.Get());
    BOOST_CHECK(!tx.IsReactorStake("reactors.dat", scriptReactorOP, scriptPubKeyAddress, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000 * COIN, 0, 0, 0, 0));
}

BOOST_AUTO_TEST_SUITE_END()
