// Copyright (c) 2015-2016 Nathan Bass "IngCr3at1on"
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "reactors.h"

unsigned int REACTOR_START_TIME = 1462881600; // Tue 10 May 2016 12:00:00 UTC
unsigned int REACTOR_TEST_START_TIME = 1453075200; // Sun Jan 17 18:00:00 CST 2016

void CReactorDB::WriteReactorDB() {
    LOCK(cs);

    WriteReactorDBVersion(CURRENT_REACTOR_VERSION);

    // Year 1 group 1
    WriteReactorAddr(std::string("dMd36o2f1xpRqjbhtJzzMQKFCnrPmkY35W"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36oizJFn3SmAkb6joFxeGdkxJfD5hma"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36oy5gCoTBpzcDow7zBVQzkjXkEK4zg"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36ofwR2BKWvDHE9R2PMTZgcpqCXMCSh"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36op6aXpdqrrguid183dFokfNgWj2LE"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36orZs9Tt9aVQMe3zwwPSDu4V3Y3gSx"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36oYfiD1H2dAA6MKyvVypX6t1vzgyn7"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36oC3cJ1tq3paRoudv67FzjWAUzUmxk"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36oWVvkFWVcDwn9rLrv9ho7hHe8e2Aj"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36odLYXup2aeHu1F8peZ2DLuru8sR4a"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36o4JMpMsFdx5WhWheNmMsJ6RxuQGoi"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36oGrLK8EFHxYvjFr3cHKaFaganBc3T"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36ovsMxr7XTwUWTvkKBMNmZqxdAq2Qf"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36oNNJu54XVfpp22GQNC52QWbwEkZBu"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36oQ9Mo518CZDZYyWpq6NXHBTGdEuz7"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36obh51hvr94tZMYcaaS71ESW7rR4wp"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36oiMbbonehWLTk8fSRPvLerKWEuxq9"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36oaFt14PGrLKtGjsQCYuk11RWoQseB"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36oSPP6eBK3UyFJTQ1gXc2ATi2PptpB"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36oJ6tKMi64xNwhGRuZ7tGKkTA2w91L"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36obGd94CMTchB8Ej8Uywb3TXCLABi8"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36ogK8wGoemauLuwxYuzm9ZCaTq8Unv"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36oMramh7TjUMuSrbz8XandDKh7sG4L"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36oZGt7x4jcWYrvsi3mmUCcJYwj5ycJ"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36oG39FLCTXYixrPeM2P1zbnCLyuuWt"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36oN4KZvixno5JwpafaUKSN2atbHhJ7"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36od2grzbCZrFbzukcvQSckngZ8P9FT"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36oYg1bXP25GpDVPWpWZUkDqbMZeVfT"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36o7kSGthLtqsTnL5SSifSTFzoKqs2Z"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36o8aSPwAN8N7nX3sN7T7B3nxPoNpJU"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36ozBZ3s7Xxt7jHpaf23ypURWC3MtzE"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36oCxTaNdWW1L3EzwQfNkg99LZZ399z"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36oxvXtSjkLoASTTbYEWLhevb1x83wJ"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36oUFiEUdMSn1B2QXhgu3Z3h2TuP9gs"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36oLh44w8X1WhRvp4jyVA6vwucBuS2S"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36oAuLE9VDuAZF15zQKy43XyRGygdLZ"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36oXeTJWGk8yV22jsamGqaUBwn56aKa"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36oQrHRKnKmYFKwELP2qGw8hPtSHtSd"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36o4ntQ3aSBS6ZbseCA5qe4TWuuNT61"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36oRXmj3hb7oiw1MapLpmdKDdDstMkh"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36osq1Vg9tHk7dyLamkqgsNjMcTRADS"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36ojhQS4mEffzv6rZkNZtpufsW8WFJV"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36ooJ27wqGTbbcaFP46FGwD2BNc6W7D"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36onmRjUtfzkKmNrHpxtA7ugtJgRBEK"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36oz6Wa3Jm4Yk82nxwbexW385XgLjer"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36o4NWrvwE2156mpFEkUKFLa9c39MnN"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36oiEsJEsu5JXRCNi6Vy5HQRs89kbvJ"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36o2LrskBknTtXBw6ry5aRqLrAizFby"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36ojMQ7wMuYdyJ6PNhpjAva2dkXaByK"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);
    WriteReactorAddr(std::string("dMd36oVDG9Z3VPaCVC8ZFvfMsai8aJ36VR"), REACTOR_START_TIME, REACTOR_START_TIME + 60 * 60 * 24 * 365, 1000);

    // Year 1 group 2
    WriteReactorAddr(std::string("dMd36oZL8CnJKVbsUxtaGLzMzyofKSFqMn"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), 1000);
    WriteReactorAddr(std::string("dMd36oM5h4BFXZ8D9ZAQN8vSRMtKdb4Jnq"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), 1000);
    WriteReactorAddr(std::string("dMd36oz34cbiyhrcRKpfmhXKDmsVMKfJ1V"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), 1000);
    WriteReactorAddr(std::string("dMd36o1AtREdscY8HoX42dUCkvhwxsPKoc"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), 1000);
    WriteReactorAddr(std::string("dMd36oFgNikhdiv5haAWhcjji3VmHeMz8V"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), 1000);
    WriteReactorAddr(std::string("dMd36o9vbH32MaU2KmMDkNo1JRkdPigLck"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), 1000);
    WriteReactorAddr(std::string("dMd36oJ9oxQ8m2i9Jhmab9NtfUe1H7c8yV"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), 1000);
    WriteReactorAddr(std::string("dMd36obgAMMEGckQb1R88kpPpd5EWYwda1"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), 1000);
    WriteReactorAddr(std::string("dMd36oknqBxpwNq8TLuCKbDHg7eY8URFaf"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), 1000);
    WriteReactorAddr(std::string("dMd36oonaU9gmQZ1CEAhfsUFQ9tPidb8P5"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), 1000);
    WriteReactorAddr(std::string("dMd36oW1AFSJAiDXr67r7CCj8E87xuSgGS"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), 1000);
    WriteReactorAddr(std::string("dMd36o7PoLjERuej3zVY6DMoLXVmo3UxCs"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), 1000);
    WriteReactorAddr(std::string("dMd36ogopQ56XyPLNaqccx6g7DwyZHdEgX"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), 1000);
    WriteReactorAddr(std::string("dMd36omJmSu4opY1nTy1yznPUtSgNLZ4PP"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), 1000);
    WriteReactorAddr(std::string("dMd36oZmgCiSxXgCjb5QEWrZmG9CupYL5p"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), 1000);
    WriteReactorAddr(std::string("dMd36oGEXTyuKc8pF1dTggT3o6xS389Hwm"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), 1000);
    WriteReactorAddr(std::string("dMd36odLauWP47k6VpNMxQha5VGE56Qyhn"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), 1000);
    WriteReactorAddr(std::string("dMd36ooK4j4rQdB81EVhvPWN1yzYHcnpcJ"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), 1000);
    WriteReactorAddr(std::string("dMd36oR8hGxPWv398cyao8R5gYz35GxLaf"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), 1000);
    WriteReactorAddr(std::string("dMd36oFKAne7u1zJZoEEt8Lx87BoqrBqfx"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), 1000);
    WriteReactorAddr(std::string("dMd36onvuwthQ1Dg6tQiCYpN87jmA7WEpB"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), 1000);
    WriteReactorAddr(std::string("dMd36oPKg8uss6FLZuxv2iXQS4DrF3FsPa"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), 1000);
    WriteReactorAddr(std::string("dMd36oxP8XjGRtumZ3im6rSkZ42nZuY3A2"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), 1000);
    WriteReactorAddr(std::string("dMd36ofmiUmHHcmwgiwxJterCd9mEZQmRP"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), 1000);
    WriteReactorAddr(std::string("dMd36oJjyHf9y842JnoqtQuKpcoYErNzMV"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), 1000);
    WriteReactorAddr(std::string("dMd36o47zSy7bmERdLFdsvkSUaV8VgKkK6"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), 1000);
    WriteReactorAddr(std::string("dMd36oGHmnrW5HJnHVnHkWwZMPC4GGdfSQ"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), 1000);
    WriteReactorAddr(std::string("dMd36o3ceJMD3pXJq1yXp1sQhB3dmkTyb6"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), 1000);
    WriteReactorAddr(std::string("dMd36oxPUiFraQHEeg9iYB8cL8h7pKqQHm"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), 1000);
    WriteReactorAddr(std::string("dMd36oov9SH3bNG3qB6kr1pz2W77odn7GS"), REACTOR_START_TIME + 60 * 60 * 24 * (365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), 1000);

    // Year 2 group 1
    WriteReactorAddr(std::string("dMd36oMMnScuNL6qiK9UU6whWWDjYbY4Md"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);
    WriteReactorAddr(std::string("dMd36orfHpvyqd5mMVWg7pzXidfZhMHAni"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);
    WriteReactorAddr(std::string("dMd36oRU3itkvwVZaxsnJG7ePkRFTGrZAp"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);
    WriteReactorAddr(std::string("dMd36oJ2m1tkJdqrmuXHppmfuRJuMFy2QS"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);
    WriteReactorAddr(std::string("dMd36oxmibF2dCv2yWpR3vjxfudUdUH7m1"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);
    WriteReactorAddr(std::string("dMd36ou7SXuR4PXATDyatajHF4Uk4zKGTW"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);
    WriteReactorAddr(std::string("dMd36ozvLn9jxh9kLzyVMce63Rcj8mzKGm"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);
    WriteReactorAddr(std::string("dMd36oh8Wf7GksZ8byqLYETKx935WjW3cY"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);
    WriteReactorAddr(std::string("dMd36oiiF4q5UEx38Azmi1yx85y5RTVC6R"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);
    WriteReactorAddr(std::string("dMd36oCYt7uyDUwQwNSDRsQR3cPPZp68Z8"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);
    WriteReactorAddr(std::string("dMd36omxRb9FvNVaAmyuqWKubigsqVQVjv"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);
    WriteReactorAddr(std::string("dMd36opdXiyCg6RHcQMnpAwZr7nW6PnRSF"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);
    WriteReactorAddr(std::string("dMd36oTczE1XAK4Gy3NE3tEeh9PjzgsK2L"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);
    WriteReactorAddr(std::string("dMd36ozivzmpCFCZnBy1ZxWvzjajN2AqAf"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);
    WriteReactorAddr(std::string("dMd36omSPXMQbW21zgbqTQJ8AcuRKN6uzk"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);
    WriteReactorAddr(std::string("dMd36oux17dbgBHDqJ161L2S11i34FhTtD"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);
    WriteReactorAddr(std::string("dMd36oLEoziV5B4jspBPTwkcVzwXte1C7k"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);
    WriteReactorAddr(std::string("dMd36oaZNyvrzczfwGZ6ju6c39PB3LBRmW"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);
    WriteReactorAddr(std::string("dMd36ovnydN3MjEYE8GrohomUpxZUnJyMB"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);
    WriteReactorAddr(std::string("dMd36ohd1D7kY1TqmdvVGK2PAG1aTE9DPJ"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);
    WriteReactorAddr(std::string("dMd36ow47Q29WNcd5X1oT1tTqfhmBCvWLS"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);
    WriteReactorAddr(std::string("dMd36ovgqEX9pEpYiGTNp9TRtKqvgekMc6"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);
    WriteReactorAddr(std::string("dMd36ogmCu5SCoveeSTPJwEEaohUPZzH9v"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);
    WriteReactorAddr(std::string("dMd36o4pyYrTFVmMGamrGDD6hwkYedfNdT"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);
    WriteReactorAddr(std::string("dMd36oUwLtFviPeZsrZjGoorKT3XFTaSAg"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);
    WriteReactorAddr(std::string("dMd36oUzfNoqMMnnTKoH4yGRE8346BKGVy"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);
    WriteReactorAddr(std::string("dMd36o48DmwrzopGBsw99cPUN81TK3CC5D"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);
    WriteReactorAddr(std::string("dMd36ob7NE9ZHQXfGaQtwusy7f2YkBtsz5"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);
    WriteReactorAddr(std::string("dMd36oSfWPBZy3T3Xgapi2po28UDj7JRD3"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);
    WriteReactorAddr(std::string("dMd36o1yiGk56Nv2XCnCJLXwRkAngosWKG"), REACTOR_START_TIME + 60 * 60 * 24 * 365, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, 1000);

    // Year 2 group 2
    WriteReactorAddr(std::string("dMd36oheiFcrK4Fi1S6YQGyzms5kGQNM6m"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36o89VvVB93fZKtdNKJ4ViXMBYbDwYC"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oQR2f6RETor8FcyZwuhTahLDfN1db"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36okQ8hCuTjNHV8XcxEtbW1GoCKwvoT"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oWnuiMcr4X69zKqThs3kqfZyVT9wA"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oqQkXpvbRLJiXQtqirQzmGH5ooZLw"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oY7tsmsaUi2q98LiUt5tQqtqq6n41"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oamoqhXFWpGxsKgrNSiiZ5G1cThoE"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oMWeEPbqMc4fMby82cjf2CcCi2sy1"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oHxBudoHY1vVWn39hYBQgHP6VoT7X"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oS8CGtqkdeFQu2RrexD4tWck7cfC9"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oVHPhNxb4pX9jME7vMQt9UB85WEEf"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36ocrqUwJeR3SkfxsVzFQ6RUtVCmzJL"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36o2UaDUgmXSmRWRLorfjLR7DekMdTP"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36ohPiMqcz4nopVUz36ehj5udyUfLjx"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36o5a1jZ9ohgVZDGXxBhLfPCr74T5iA"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36ooiDaGpmRBeVSgK1bpi13XqFBsc5p"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oMN7k57YTJcBrnCHHCbpYroe6bk64"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oZRNRaz9SnPWxAusURi1t1RaHBeb7"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36of6RGUmqnceCXiHsEAsjLG7PNJFBY"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oz7bnZYNo9se7SyHW9rczV4KPGVvp"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36ox7AXap7SvT55e5bbmTdB6RpcvdXh"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36onaJDAyvLqBcYWjk5DDuGwoqymyAV"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oDVqTUrpQiRh6qxQPNcgNLtCGh22E"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oFgtStDgM78VHcnAvPpuqTRLL7xEj"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36o3cuHpUJphfGTAjEyHHu68CuNt5C5"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oKrJiBCVTMtkHhifRTR38zC2A1Nfc"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oFjhgxdDYryhZiqAS3Uh3dcSJhtU8"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36o2Lvkwhi4UFhfhiZqH7xakHhiLJQo"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36o7V9qmJoruQW5jyhbM3ev5wUYjupg"), REACTOR_START_TIME + 60 * 60 * 24 * (365 + 365 / 2), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), 1000);

    // Year 3 group 1
    WriteReactorAddr(std::string("dMd36o2inYGNQsjrbviPTmQHBbGLFd5Dwx"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);
    WriteReactorAddr(std::string("dMd36o9cQ5LyH5KyzKMip4pEFMkx45F4TF"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);
    WriteReactorAddr(std::string("dMd36oPXSooCF8WMEovBAAxxPFsM8XCMBy"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);
    WriteReactorAddr(std::string("dMd36o9Ye7xQFQ7puB218vXwVt6Awvva3r"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);
    WriteReactorAddr(std::string("dMd36owy3kitfTy5bzM92KtY4WELjKtvTJ"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);
    WriteReactorAddr(std::string("dMd36o5V9yB8YJtJW5n85WFUw6gbRzZTBZ"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);
    WriteReactorAddr(std::string("dMd36ouaJLZtEVgcAKEhVHwAYcMAHmVHXy"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);
    WriteReactorAddr(std::string("dMd36oM5kK86Qp12xZ6MvDowfdJZZqZQ2p"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);
    WriteReactorAddr(std::string("dMd36oFaK8iJuruezuXUZJDsciTxdmcyGt"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);
    WriteReactorAddr(std::string("dMd36o8DhzQ8dDMWaGX3oeB4WQKr51mR4U"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);
    WriteReactorAddr(std::string("dMd36oV6MyiPoy5DCxadXfJyJhff18QrJs"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);
    WriteReactorAddr(std::string("dMd36o36FwLSR8goPBcUaCG5YpRUZnXdZQ"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);
    WriteReactorAddr(std::string("dMd36oSd7RcfdYiDhAZoLRhgvHbXdzXyMv"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);
    WriteReactorAddr(std::string("dMd36oFRUmZ99tx4UBqo49qsSzaVkhi7dz"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);
    WriteReactorAddr(std::string("dMd36oL83sZtKjGhAn6zhyWxZNfAD5vJxC"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);
    WriteReactorAddr(std::string("dMd36oUV8QvnZ6cPjigKjZS7F26QVavSYp"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);
    WriteReactorAddr(std::string("dMd36otpin5u94ZyPCoPqA2gbDvkEFg6iH"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);
    WriteReactorAddr(std::string("dMd36oEvLPXaKxhYhjxxQMu77NjpkanHnf"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);
    WriteReactorAddr(std::string("dMd36otyxXs7kt8J27ZmXYpvqVFy22JYBY"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);
    WriteReactorAddr(std::string("dMd36o3nokGTUfKQm3PQZwqx7D41iWCEwK"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);
    WriteReactorAddr(std::string("dMd36omMNpP8Lj715tQrfHRdGkFh9QPndE"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);
    WriteReactorAddr(std::string("dMd36oeEC7ub5sHD6gqmFwg5RmZN9waQ3u"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);
    WriteReactorAddr(std::string("dMd36oNVVW8UDdZ5qy9JsJkPmFd7gTuhHX"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);
    WriteReactorAddr(std::string("dMd36o7HGByuyk4emA5E4cGkTtVP1hsRTc"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);
    WriteReactorAddr(std::string("dMd36oPZYkZtmCZoPSJMo5Dk57mCiiS2DC"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);
    WriteReactorAddr(std::string("dMd36ofRRYSYywcUSzwaVMSdKkzBHmzLSL"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);
    WriteReactorAddr(std::string("dMd36o9H6r6m2phZ4uDkk8e9Kxm7okcRvH"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);
    WriteReactorAddr(std::string("dMd36oh451uBqjfDWxiJNCC8GzUugy4CfK"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);
    WriteReactorAddr(std::string("dMd36o6AkB9wbJ4VDN4EBZ4q3Q8nkY6Nay"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);
    WriteReactorAddr(std::string("dMd36ombweBLcCTMweFBWKxLHsk9W4WrAx"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 2, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, 1000);

    // Year 3 group 2
    WriteReactorAddr(std::string("dMd36oZ1uhFvdzP8TULR7b2ETvBZyD16LM"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oAh8GRCPzrgRWC4ykFT4oyrZP3Nks"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36o667bZtfxckXP3ocFb1sByKnwAYRa"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oS6CdmBV5dcBHS2csodE7aiN5eJyn"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36o13cajnt8gtq7jxejU75KBJrQSqCS"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oW7kaisdjC1ewdmhTqR9wRfMhKRd8"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36ogpFLKSrv1tMajgUURatoY9Zsj9M2"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oMJKcSEewgMr3iqH7QtLZwPUvkLfi"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oBbjQMyZNx8s673sFSk1MGCntVJ2P"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oVCrpwDt3Saa4AryTvMDVUeQVFVJ3"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36ovZkS4FVg1e4L4hQex6um8Q2qY5oH"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36omJF33uQ9SHY6wjJM1JmqcHzHAj2T"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36opnHw3LwbhssqocSBCYsUqCdfjufk"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oEMBCTA7S3WbfcYrZwwtQx5AtSirw"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36opdZiz8oEV7EA98ANEWjb2hjABBEE"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oTputpQVdXUbbMVf9hBXiY7Da5ZeQ"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oQGdvrXdeXNzpdvj1bKjRngX1Suqw"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oCCKwprSg2Tjqgz1Gukn7ybJ38zUM"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oY4uaSmgMvnYtVzo6nDYVK3dy5of6"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36ojibE7GxovWuwyB9f1DjSpH8zZTXP"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36ohcPLYU8Dd7xM5FRTEaPmgjaNkLPp"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36o3k561mQmQwYGhvdTGFtkK1ngM7ss"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oHX1XDkhepMj8yTLUbJCohBEA4AbH"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oUMSevHtgZSKNtQVwjJFC3dWG6DQs"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36o6ZdRoQZAbJxUKdgJKFsnqjNX3ZyB"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oQ11TqmoWacR4nC7931quCfYeCw7W"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oCTVs2SmLhGwHY4bWaoNwbKbNVjm8"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oFoWYo93JMfDm2trtrrKCEbi7YMpF"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oxjuu9wgEZDEeWUciDKx1JM357jbm"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oHf9xxULEVC5R6pu2pKQGtEsRbtvY"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 2 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), 1000);

    // Year 4 group 1
    WriteReactorAddr(std::string("dMd36oBakBHeJ1h7e6xwGjvB1RMAgDP8TT"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);
    WriteReactorAddr(std::string("dMd36oWqbHRQmHKdgsJC6WM527MMrreNNM"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);
    WriteReactorAddr(std::string("dMd36oe5pbTdPpnBptgds6Pf64x2iPcn3Z"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);
    WriteReactorAddr(std::string("dMd36oJ3SByKPUsYAedqyCUVyq3zo8Fdiz"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);
    WriteReactorAddr(std::string("dMd36o6xDseQLYTpXfSpkjjFmvi6FZCib5"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);
    WriteReactorAddr(std::string("dMd36oU12z2GcPd1rdmxKGtoqgtQdEFX5H"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);
    WriteReactorAddr(std::string("dMd36oS1tNDKjqjFkHRZtLT3gGXpbUx2Ae"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);
    WriteReactorAddr(std::string("dMd36oB1FcA6cdvR6PUymhG1BC9yoEe9s7"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);
    WriteReactorAddr(std::string("dMd36oHPf8WjeinByMptbN68DJpJ5uGU2G"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);
    WriteReactorAddr(std::string("dMd36oGbuZn6LTCGnXQbFcvgSRDsr3hwLE"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);
    WriteReactorAddr(std::string("dMd36oGcvh6pmkEMVpnjan1priLBXV8cgh"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);
    WriteReactorAddr(std::string("dMd36oJeDyA5aJUKtG1x6DEHSG8SWVN6pP"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);
    WriteReactorAddr(std::string("dMd36oV8dZvsXjmtk4trGZRyMsTRxKbJhJ"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);
    WriteReactorAddr(std::string("dMd36oMZaiVXFT2yXKQRbTCozZTSYFXDfs"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);
    WriteReactorAddr(std::string("dMd36o1qRsAijrzgzp5xQauTnrqpzrvz6q"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);
    WriteReactorAddr(std::string("dMd36orasqXxbuUQFjesvgedQgpNUJ5xg5"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);
    WriteReactorAddr(std::string("dMd36o697vqa3Y6veUUauPkcqkX1zYTo9i"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);
    WriteReactorAddr(std::string("dMd36oW2gyNhw3MBzA3zY8PAkUv6oujn6w"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);
    WriteReactorAddr(std::string("dMd36o1tZnMqX9fsDnFUjFM1kEAFa8Wn1g"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);
    WriteReactorAddr(std::string("dMd36oTJcLsiWHr2CESK3Ag8ybnjLa9Wv3"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);
    WriteReactorAddr(std::string("dMd36oqwXqYU1AAJaYU8tt9fZBifLk551d"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);
    WriteReactorAddr(std::string("dMd36oMZhzk9oEc8EHRsum74BcCg7FCfQJ"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);
    WriteReactorAddr(std::string("dMd36oU44s5uSsPT3GzHupVjiJQwEPU2vk"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);
    WriteReactorAddr(std::string("dMd36oUmzD9rUgGUNKpaBVKLWf4cjSw4GP"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);
    WriteReactorAddr(std::string("dMd36oq3sK1W6hLSLarbnFJCyAVEgKiRTQ"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);
    WriteReactorAddr(std::string("dMd36o4PJvWJD6aUTfdPxuAF3J5uNnnGCq"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);
    WriteReactorAddr(std::string("dMd36o1GYFDTovyfQN7cgiZEj2stCZD8pr"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);
    WriteReactorAddr(std::string("dMd36oT9JZkJz2k5yQg6kqvp7qr7TDPCSu"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);
    WriteReactorAddr(std::string("dMd36obEHBp8sN2HQMeJFmDkFvTwRZwWxY"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);
    WriteReactorAddr(std::string("dMd36ooVCZa9VxJP9x1d4zy8S9FVRuCfKr"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 3, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, 1000);

    // Year 4 group 2
    WriteReactorAddr(std::string("dMd36o7GFjHsQCqW1MjnHxyq2LspFGQjfA"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oq7fs93HFV9yXZ79gxcSf8VGJGy2B"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36ohY48bw65dLaFVcReuMkmQtdJiqdx"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36o3MttJEWJNpBFUH1LJ2wBe43Um8Xr"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oNgRDTYtZm99UWVSWihLEaPhXExKL"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oV7BUS312c6GSMArwMivkT6DSjZXg"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36ovoEbC1qEm2xRrNCgANcHJrPcasrE"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oceKzCYQ54Uv7hdRWt6dH1seSz3VA"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36or46U46ZGytF8bSUbxANCZEsYSyUj"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36ohMeGEEpvHGG7esB5eMNPQvJztJdN"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oC9bkJtcMFhYrtZQJSAECSkHdsY6z"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36odYhxwonp8LBnL6P7ZdM3qZrDThLK"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36ozmEojszv35rkf1S6WYFZYUC6ze2P"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36o2S9f8cuAW4k6FGhqqWzU7ZuGD9Qv"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oVuGfGe3ZazYwbNET5BtBpc1cGACN"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oe2j3pL8dH6dzKqbUuMSTnJezHNpP"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oX7LAnfNMPFVfvcJBcDPcJRYUvvRo"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36o7pGGn6nf1vmmTvgRtjcwvJE9hCA7"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oDDkNyPFeeVq5N38PvvNry9qctST6"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36odmMdMKV5tRi4EWWGja9jLvmkw219"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36o5qRWHb4GxVUj3tyy91N7xPG4PJ7U"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36o8FErExgrKWMkUtMfJZmyYNUNvDA4"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36omecJLtDK6NofCrYuWvB4iwnDvBYq"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oBbwariDhR1RBQZndVdHcpoxDkZxT"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oeAVcno4R9u1aauvxef2WWNQX2pwT"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36o7UtCYwSdbb5JjxD5x81sR4yJvCQb"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oXam37orGtFTA496LqrErVNWw1ao4"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oTP7mnM93nFnqyhsXa2xmwpo4utWM"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oZt9cqBUY8qEYtjT5STR4FWP3sA4d"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36okrNi5dUxoSYYduEpxTRB5rkoZjJs"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 3 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), 1000);

    // Year 5 group 1
    WriteReactorAddr(std::string("dMd36o9umQgGZxF1PNhGDQGdh1PPig1VrK"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);
    WriteReactorAddr(std::string("dMd36opPwHvhzbTqZCg6nHsdbFxkKfCBYX"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);
    WriteReactorAddr(std::string("dMd36oKX2jZzvNgCursjvpYd6fxEtryRrK"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);
    WriteReactorAddr(std::string("dMd36oNpjzYvh672hsYkiAAG5XRZmeXq2x"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);
    WriteReactorAddr(std::string("dMd36ojborkoooUYfyYMasHRJYnPwTbsax"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);
    WriteReactorAddr(std::string("dMd36osjB34sKpSPD2yjxCSzhQzF1YX3MJ"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);
    WriteReactorAddr(std::string("dMd36oqrgLYoQNj2Dygcxozna3tPu9C18R"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);
    WriteReactorAddr(std::string("dMd36oa49jkBkb9P3Cb7pRLF2ejNNHEc5p"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);
    WriteReactorAddr(std::string("dMd36oKHiG9PU2rWgXHcB5vuRg4WHwY1AB"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);
    WriteReactorAddr(std::string("dMd36oVmSAag5uzT56CdL8KtJUja9ofLjc"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);
    WriteReactorAddr(std::string("dMd36obzmJqMKMYzLM4rqYPm9foYyupb9A"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);
    WriteReactorAddr(std::string("dMd36ohTf8FrgkTX9fEybDrD5XRFDZZ1sE"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);
    WriteReactorAddr(std::string("dMd36o2KEeh93YEZ8cPGkk7sfMXXEkN1as"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);
    WriteReactorAddr(std::string("dMd36oqyyywoaZWDPKranEpWdHnhxApLNN"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);
    WriteReactorAddr(std::string("dMd36oNaBPzwYPeK2bqH6DN6EimUavRV5x"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);
    WriteReactorAddr(std::string("dMd36ouAHJAQLxpKJ6qQ9ptUE6teAXd1QD"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);
    WriteReactorAddr(std::string("dMd36oL2PDn2pXhc8EwFxDtQf7JqqT5FFB"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);
    WriteReactorAddr(std::string("dMd36ofwKq8XcMhH2iaQSdg23KXkQhV8Rx"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);
    WriteReactorAddr(std::string("dMd36oW8HZSr4VamfbrD1XwfnQUVsJfVoH"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);
    WriteReactorAddr(std::string("dMd36o75BBMGSekBvUFKLCgXCFNfUXLFdD"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);
    WriteReactorAddr(std::string("dMd36oWKYDHYvitBmjzYsnRJ2DmjiupfJ1"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);
    WriteReactorAddr(std::string("dMd36o6kU6Usx93SP42nka5bvr1cVyUV6B"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);
    WriteReactorAddr(std::string("dMd36oYFbMhaB8aYE1WNnXKdXvx4QtN7fX"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);
    WriteReactorAddr(std::string("dMd36ozf4ngdgUEXjHbZFLEEtX3pi8uk3P"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);
    WriteReactorAddr(std::string("dMd36oEF6YuS4oyi8tMVY3t31QXax3pTNR"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);
    WriteReactorAddr(std::string("dMd36oKq8wizd6Bf57efJTanzC44wTzZcd"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);
    WriteReactorAddr(std::string("dMd36o4cm6yBeT1rLPKsX4ruv8m1NBzbM6"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);
    WriteReactorAddr(std::string("dMd36o5qFZW8ksMRX5v3rVZjyN1PtTfNWc"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);
    WriteReactorAddr(std::string("dMd36oes7Y6ZrusSrZzjxRUfvVeDtkHubp"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);
    WriteReactorAddr(std::string("dMd36oTs7GZqQxBY6nRMffiMDhtVQF44Uj"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 4, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, 1000);

    // Year 5 group 2
    WriteReactorAddr(std::string("dMd36oHTmMzUQEFkzUyrHYBq1ZhFQBov9w"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36onBPfWMvv69EpxNXfwAahBvudWJPJ"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36ou7ov8513weh2RQsBNcuHMpbLaQVx"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oWD3yMKA113Fv3dNbtkD7yJH9xZYy"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36ouVchHGt5iXdZv2H1fgCoZYb6DxpF"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oy62TV181FbbL9s8AXo4s6KsMNt4x"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oLxiRrCDkkpsuxYvYGbFFeqVod2vc"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oRdof2cqGzrFqCqBFgSaQ7W6em8Ep"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36ozSRfjVSU89z5SUaSsAWgx2q4NiJF"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oVn826RT4YddFad1jTq5NtkgtSrwg"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oJeTrfJshm3mhCQ9feNvm2AjM316p"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36o3oUqgcTHuoAMd2xhUVqPVcMsAUn1"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oqo6nNHyaUJfHtqu3ZdQRHJCNGAFB"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oH1LRWzkRjuHcf2NdspoacpYsbcmh"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oD314YtkWf6e5hpsnt9cwj6NfoGTB"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oMVhbyvkUbsbcShhuhPHfxNd43KtW"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oJ9KdqGqm1K9c6sx5VKPfScY1YKZC"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oBgAUK25m83sNAGGYmK5pYj7rCvaD"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36ob9UQusMEF9dEXvGT3k2je9fXQox9"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36o8r9MC4QBgrLqHrUTpRoWxUhSLjDL"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oh9ttBHQxHrja7859cRqfEKvAkCeF"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36ophXvDzifXBrk98D7pZAU6LbTBXcR"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oWR7wtjgaxB6mgWZEMf9wutM1BB8n"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oxScfgJMaHctWbBNZTTkRU75AUSoq"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oCbP7pQytLuDLxeEZu1DgHUwR3Udp"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36ohHhJFXyhSndcemVJmvdaAPmVWFUz"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oERDvd1Vb4qsfT7u6G5XsbV7VP6QY"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oChxkUxQL5GzWbqqsw6GBniEcJFUY"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36owM7A4HyH9cpsq7Xn8igA9pL9CKXJ"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);
    WriteReactorAddr(std::string("dMd36oq2qhwhYFK9Y62dp5zKFCeYqqgVje"), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 4 + (365 / 2)), REACTOR_START_TIME + 60 * 60 * 24 * (365 * 5 + (365 / 2)), 1000);

    // Year 6 (1 group)
    WriteReactorAddr(std::string("dMd36oMNnpTfRC5BKL1i1uCrtiZb8Ynedn"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 6, 1000);
    WriteReactorAddr(std::string("dMd36ok1VajGGHaVUcms7dG2W7s5HFkQKe"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 6, 1000);
    WriteReactorAddr(std::string("dMd36oNbX1k9bXvfdh7dpWWH2u5dAiGudb"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 6, 1000);
    WriteReactorAddr(std::string("dMd36orfGuHp1bgwfjFJWX6Ln1WcwkEx7X"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 6, 1000);
    WriteReactorAddr(std::string("dMd36of2YXpGR4LD2mENSvQ2WaiMaM2U8H"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 6, 1000);
    WriteReactorAddr(std::string("dMd36o7K968tsu8d6XyNR8ixbraTtbTm3f"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 6, 1000);
    WriteReactorAddr(std::string("dMd36okyYkJWJf3koJAtdghPfbCyHDJWqU"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 6, 1000);
    WriteReactorAddr(std::string("dMd36oFer1etuhi8vS1qQweSCtwwekJ56B"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 6, 1000);
    WriteReactorAddr(std::string("dMd36okGNy7eyiRU7TJUzvcWqoeeWoR4qD"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 6, 1000);
    WriteReactorAddr(std::string("dMd36ohTnE9LK6aMVefobASfhUAtQG6z5Q"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 6, 1000);
    WriteReactorAddr(std::string("dMd36oH9Vb1sEe5Ac3nEmZQRzWP2WnbsCJ"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 6, 1000);
    WriteReactorAddr(std::string("dMd36oBbWy8a1ddLT8nZsFf4YmGyafGjKh"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 6, 1000);
    WriteReactorAddr(std::string("dMd36owYp5DYr7eBCdkYbNjSUCeVSCVVvw"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 6, 1000);
    WriteReactorAddr(std::string("dMd36oJEBC68pvXC77rKKC3FcZuGRJPdUD"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 6, 1000);
    WriteReactorAddr(std::string("dMd36oW4crZ8FCCnYsNz1qpSwfidaztRVv"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 6, 1000);
    WriteReactorAddr(std::string("dMd36o19QGANdBpFipB9dMfFhrfMND6ac5"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 6, 1000);
    WriteReactorAddr(std::string("dMd36ojooynBmXXSjKXZQhEc9vPoMYU9Qo"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 6, 1000);
    WriteReactorAddr(std::string("dMd36oJZU4ynmrYaz8Pd9ZtMpW9PcALaZC"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 6, 1000);
    WriteReactorAddr(std::string("dMd36otXFLwz2iHDZ5kbWMFVWRb5qKcATs"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 6, 1000);
    WriteReactorAddr(std::string("dMd36oy4euTaeKHVZW7fJZoCjH146XE2in"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 6, 1000);
    WriteReactorAddr(std::string("dMd36ohA44QM4pmTBeeA1S8JJ99FWhuAQw"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 6, 1000);
    WriteReactorAddr(std::string("dMd36oib3EdFVavFXBmd8pwQGQWnWBPjuG"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 6, 1000);
    WriteReactorAddr(std::string("dMd36ofRxGFJw9kDzZym1AqS5Y2zKLuoNh"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 6, 1000);
    WriteReactorAddr(std::string("dMd36oYZ1TAkvka1snB6yG7iNgrhgfqXh1"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 6, 1000);
    WriteReactorAddr(std::string("dMd36oxpnHFCC2hYxiqauPyRYovyr84nZa"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 6, 1000);
    WriteReactorAddr(std::string("dMd36oQPXhfPzTKN5vcQugrWyLea4Z95ct"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 6, 1000);
    WriteReactorAddr(std::string("dMd36oTYh1CperuJBorfrCexRoDXojFuEu"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 6, 1000);
    WriteReactorAddr(std::string("dMd36oT1Vb7HGsgfuRGqr2PRrBgF8Yn7tW"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 6, 1000);
    WriteReactorAddr(std::string("dMd36oaRy2Pfgxzp1HMYc9nnhN1r2kHkRD"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 6, 1000);
    WriteReactorAddr(std::string("dMd36o4YfLwRy1WqoyPc9DXRKkviDsMj5h"), REACTOR_START_TIME + 60 * 60 * 24 * 365 * 5, REACTOR_START_TIME + 60 * 60 * 24 * 365 * 6, 1000);

    // Legendaries, no shutoff time.

    /* The Hearth of Eternity.
     * Every great dream begins with a dreamer. Within him lies the strength,
     * the patience, and the passion to reach for the stars to change the world.
     */
    WriteReactorAddr(std::string("dasHERZmwgtvWGNRxs55GPrXsAKwY7bX85"), REACTOR_START_TIME, -1, 15000);
    /* The Cullinan.
     * To be announced later.
     */
    WriteReactorAddr(std::string("dEB799gGhnG89b8bkcPUitgXiJWc7ggNCM"), REACTOR_START_TIME, -1, 15000);
    /* Koh-I-Noor.
     * Rough diamonds may sometimes be mistaken for worthless pebbles, just like
     * the true value of a human being can be hidden beneath a hard surface.
     */
    WriteReactorAddr(std::string("dMdjuF7xcsUvkYy2ikaQkx5z5viqNvhzxz"), REACTOR_START_TIME, -1, 15000);
    /* The Allnatt.
     * Watch your thoughts, thoughts become words and words become actions.
     * Actions build character and character defines your destiny. AreTimes.com
     */
    WriteReactorAddr(std::string("dTKsf6qD7BeVN7bNZpBM2M1iXfbrt5vvak"), REACTOR_START_TIME, -1, 15000);
    /* The Steinmetz Pink.
     * Kishore Now That You Are One Of The Legends, May You Be Immortalized In
     * History. And Bring Hope To, Those Who Have Lost Hope.
     */
    WriteReactorAddr(std::string("dW4mnJLQZwFExTBFTBdGSNte71TfvqC8LX"), REACTOR_START_TIME, -1, 15000);
    /* De Beers Centenary.
     * To be announced later.
     */
    WriteReactorAddr(std::string("dTuJJvYoDcerBaHwoK8cK2oEEpYEWr8Tdh"), REACTOR_START_TIME, -1, 15000);
    /* The Moussaieff Red.
     * Dear son Andrei, we love you and wish for you the happiest of days and
     * a bright, healthy future!
     */
    WriteReactorAddr(std::string("dMbc7KM7cDy487C9FrWwvyaquprTgtCWZ8"), REACTOR_START_TIME, -1, 3000);
    /* The Sancy.
     * To grow a Diamond is a challenge but a good Diamond gains its value over
     * time. For every Diamond that makes my life a Bliss, a grateful THANKS!
     */
    WriteReactorAddr(std::string("dJWVbYhykxPwJQ1PxxjtQjBoGc1abhfQh7"), REACTOR_START_TIME, -1, 3000);
    /* Wittelsbach.
     * Leonidas pros Perses - Molon Lave - Apo ta kokkala bgalmenh twn Ellhnwn
     * ta Iera. Kai san prwta andreiwmenh. Xaire w Xaire Elefteria. Annoula.
     */
    WriteReactorAddr(std::string("dFKNwDWexXFapBBxRh5FsYtj3GkG8TyS75"), REACTOR_START_TIME, -1, 3000);
    /* The Hope.
     * To be announced later.
     */
    WriteReactorAddr(std::string("dZTEMvLjwWjtiH3k1LCCX2soLXhQcUDLyZ"), REACTOR_START_TIME, -1, 3000);

    // Foundation, no shutoff time.
    // TODO: rip this out or replace it...
    WriteReactorAddr(std::string("dLBh6YiVNwAYWd731R9yrxxAT97eHPa8Y6"), REACTOR_START_TIME, -1, 10000);

    // Staisybit address
    // TODO: rip this out or replace it...
    WriteReactorAddr(std::string("dK8Sh1R81YxaFrwwMmYEH1QET6ejhUw3pQ"), REACTOR_START_TIME, -1, 100);
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

    // Staisybit address
    WriteReactorAddr(std::string("mkB4XAhFZmG5rNuhs4mnnBFWN3jKD2rXw2"), REACTOR_TEST_START_TIME, -1, 100);
}
