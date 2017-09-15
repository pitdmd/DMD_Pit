------------------------------------------
* Diamond (DMD) Old Version - Do not use this Source !!*


please be aware this codebase is soon set inactive
DMD Diamond move forward to DMDv3 codebase
balance from DMDv2 addresses will be available with same private keys in DMDv3

to stay up to date following us on bitcointalk 
https://bitcointalk.org/index.php?topic=580725.0
and twitter @dmdcoin


------------------------------------------
Diamond (DMD)

Instructions for compiling in Linux.

Update ubuntu
   
   sudo apt-get update

*install git to download the source code

    sudo apt-get install git

*install the other necessary components

    sudo apt-get install build-essential libboost1.55-all-dev libcurl4-openssl-dev libdb5.1-dev libdb5.1++-dev

*navigate to the home directory

    cd ~ *download the diamond source code

    git clone https://github.com/DMDcoin/Diamond.git

*navigate to the downloaded files

    cd ~ *navigate to the src file in the source code
    cd Diamond/src


*build diamondd !This will take a while!

    make -f makefile.unix USE_UPNP=-
