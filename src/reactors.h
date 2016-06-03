// Copyright (c) 2015-2016 Nathan Bass "IngCr3at1on"
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef REACTORS_H
#define REACTORS_H

#include "db.h"
#include "script.h"

extern int CURRENT_REACTOR_VERSION;
extern unsigned int REACTOR_START_TIME;

void InitReactors();

class CReactorDB : public CDB
{
public:
    CReactorDB(std::string strFileName, const char *pszMode="r+") : CDB(strFileName.c_str(), pszMode) { }
private:
    mutable CCriticalSection cs;

    CReactorDB(const CReactorDB&);
    void operator=(const CReactorDB);

    bool WriteReactorAddr(const std::string /*address*/, unsigned int /*valid_starting*/, unsigned int /*valid_until*/, int64 /*reactorStakeValue*/);
    bool WriteReactorDBVersion(int /*version*/);
public:
    void WriteReactorDB();
    void WriteTestReactorDB();

    bool CheckReactorDBVersion(int &/*version*/);

    bool IsReactor(std::string /*strFileName*/, CScript /*scriptPubKeyAddress*/, int64 &/*reactorStakeValue*/, unsigned int &/*valid_starting*/, unsigned int &/*valid_until*/);
    bool CheckReactorAddr(const std::string /*address*/);
};

/* Pass the filename instead of getting it in the function so that we can
 * properly run tests in a mock db instead of using the db in the datadir.*/
void InflateReactorDB(std::string strFileName);

// Get the reactorRate (see inline comments for why nValueIn is needed).
float GetReactorRate(int64 /*reactorStakeValue*/, int64 /*nValueIn*/);
/* Get the adjusted coin year based on the reactorRate (depending on the time
 * in relation to REACTOR_FIX_TIME. */
int64 GetAdjustedCoinYear(int64 /*nRewardCoinYear*/, float /*reactorRate*/);

inline std::string GetReactorDBFile() {
    return (GetDataDir() / "reactors.dat").string();
}

#endif // REACTORS_H
