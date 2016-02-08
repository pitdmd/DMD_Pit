// Copyright (c) 2015-2016 Nathan Bass "IngCr3at1on"
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "reactors.h"

// TODO replace with proper time
unsigned int REACTOR_START_TIME = 1453075200;
unsigned int REACTOR_TEST_START_TIME = 1453075200;

void CReactorDB::WriteReactorDB() {
    LOCK(cs);

    WriteReactorDBVersion(CURRENT_REACTOR_VERSION);

    // Year 1 group 1
    WriteReactorAddr(std::string("dMajkjpXzy2KTk21JkFx8aDtUVoaXmeMEZ"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dRS7Rnjp8wjrKigAPfbP56bfEsNA7wfoJ8"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dVUu5KNpGBLFcUWyKTBrVnkniHNQasRN5b"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dRUAjN82ySuftGFuQonboB8bvyiNp561pA"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("daiPqSjPMNpxqX4UDnhcsgv1GazoDzNXZb"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);

    // Year 1 group 2
    WriteReactorAddr(std::string("dcF2DnzGyi7XdPiHFfUK8eZS2ad4Tfn3jt"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2) , 1000);

    // Year 2 group 1
    WriteReactorAddr(std::string("dReEVEHa7o9AJreZfnrB1rDtDqvuh9eeVL"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);

    // Year 2 group 2
    WriteReactorAddr(std::string("dXizuUsA36u4u1BaPzMLp693QhdvkDCdWq"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);

    // Year 3 group 1
    WriteReactorAddr(std::string("dFvsna2hKRw98tuyHLwDhnefgSmhqfF8YK"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);

    // Year 3 group 2
    WriteReactorAddr(std::string("dbEz4pgizZ6UfMnbasZcxnXLsdXxBrj74e"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);

    // Year 4 group 1
    WriteReactorAddr(std::string("dFx64NPzLDDXTK1ajJ4w82bX7ra6RPzCvN"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);

    // Year 4 group 2
    WriteReactorAddr(std::string("dJFFCAK9pBVsiRQuhbQvkiVjLXKYVyap7Z"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);

    // Year 5 group 1
    WriteReactorAddr(std::string("dDepYKJesaenykkJpqZuzKir8crcymJ15w"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);

    // Year 5 group 2
    WriteReactorAddr(std::string("dVJf23zDxRTtpQVP5ZUU6L83DmcJVxtCBa"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);

    // Legendaries (only list max here), no shutoff time.
    WriteReactorAddr(std::string("dGXqvYugQ11mf2rmp4L2M8vRRigjU1Mv8S"), REACTOR_START_TIME, -1, 15000);

    // Foundation, no shutoff time.
    WriteReactorAddr(std::string("dLBh6YiVNwAYWd731R9yrxxAT97eHPa8Y6"), REACTOR_START_TIME, -1, 10000);
}

void CReactorDB::WriteTestReactorDB() {
    LOCK(cs);

    WriteReactorDBVersion(CURRENT_REACTOR_VERSION);

    // Year 1 group 1
    WriteReactorAddr(std::string("muLhTBAfaS2ro2fhDFh6D7MArg6qGv1j1i"), REACTOR_TEST_START_TIME, REACTOR_TEST_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("n2hXsAStBuJbjyL3QWvW11HG9t4hwPDvNu"), REACTOR_TEST_START_TIME, REACTOR_TEST_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("mrCAtCNfhLPfmJt3V4SYjU3Eq7K4eL89hv"), REACTOR_TEST_START_TIME, REACTOR_TEST_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("n4j5bHDq7C81xqE5C8mVGapcxANXDp1weh"), REACTOR_TEST_START_TIME, REACTOR_TEST_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("mgJ68V5ftC62DhjPDn5UMrR1qrk1a2dNqa"), REACTOR_TEST_START_TIME, REACTOR_TEST_START_TIME + 60 * 60 * 24 * 365, 1000);

    // Year 1 group 2
    WriteReactorAddr(std::string("mpw6YDtRPFayKdnVXdHpqugoqWFeZvt4j8"), REACTOR_TEST_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_TEST_START_TIME + 60 * 60 * 24 * (365 + 365 / 2) , 1000);

    // Year 2 group 1
    WriteReactorAddr(std::string("mrQDYWsroDVgjB2R3QtAc38Ka6YxrHQWui"), REACTOR_TEST_START_TIME + 60 * 60 * 24 * 365, REACTOR_TEST_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);

    // Year 2 group 2
    WriteReactorAddr(std::string("mo7meRhKuC2NUCvK6Lg3U2vf2LVc7a61zn"), REACTOR_TEST_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_TEST_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);

    // Year 3 group 1
    WriteReactorAddr(std::string("mrUemWu2UiKUbBVdfky7iYyivyaB7v8y8v"), REACTOR_TEST_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_TEST_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);

    // Year 3 group 2
    WriteReactorAddr(std::string("mzbPu8daUDK96iPcQNWp8aKvqRjyUYeXWG"), REACTOR_TEST_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_TEST_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);

    // Year 4 group 1
    WriteReactorAddr(std::string("moDY5fXrdpGpHramVMisq3PZMfkyvFVXJk"), REACTOR_TEST_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_TEST_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);

    // Year 4 group 2
    WriteReactorAddr(std::string("mne2paA6HQqNmbSSMn4MbhGobR9XukBx3S"), REACTOR_TEST_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_TEST_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);

    // Year 5 group 1
    WriteReactorAddr(std::string("n2vgS6NTvYXDLufLeuz4ZSXFCSwddCnEt2"), REACTOR_TEST_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_TEST_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);

    // Year 5 group 2
    WriteReactorAddr(std::string("n2ZGE24BDNMAe4yRwXSNvkV2d45HuW2PE2"), REACTOR_TEST_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_TEST_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);

    // Legendaries (only list max here), no shutoff time.
    WriteReactorAddr(std::string("mkKzRqz4hQNM3re3wZrcGnsMRRJPudPsQu"), REACTOR_TEST_START_TIME, -1, 15000);

    // Foundation, no shutoff time.
    WriteReactorAddr(std::string("mgCRA4ZXqaB8GBwb2AN2EaKL476caTdf26"), REACTOR_TEST_START_TIME, -1, 10000);
}
