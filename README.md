# Pixo Cash (PIXOC)
www.pixocash.org

Pixo™ Cash is a decentralized pseudonymous digital asset built on cryptography with peer-to-peer networking powered by Blockchain technology.  A derivative of bitcoin/litecoin.  Scrypt hashing algorithms.

Coin Name = Pixo Cash
Algorithm = Scrypt
Type = PoW 
Block Reward = 3.00 
Total Supply = 
81,000,000 
Block Time = 360 sec 
Coin Maturity = 120 blocks 
Transaction Confirmations = 6 blocks 
Ticker = PIXOC
Address letter = P
RPC Port = 55664
Port = 55665

## Development
### Build 3.0.0
This is the first release after the 51% attack.  This version of the software will help with a majority attack (51% attack)!

## Getting Started 

### Prerequisites

```
sudo apt-get update
sudo apt-get upgrade
sudo add-apt-repository ppa:bitcoin/bitcoin
sudo apt-get update
sudo apt-get install libdb4.8-dev
sudo apt-get install libdb4.8++-dev
sudo apt-get install libboost-all-dev
sudo apt-get install libssl-dev libdb-dev libdb++-dev libqrencode-dev qt4-qmake libqtgui4 libqt4-dev git
sudo apt-get install build-essential libminiupnpc-dev 
```

### Installing
```
git clone https://github.com/Pixocoin/Pixo-Cash.git
```
## Deployment

```
cd Pixo-Cash
cd src
make -f makefile.unix USE_UPNP=-
./PixoCashd
cd ..
qmake "USE_UPNP=1" "USE_QRCODE=1" "USE_IPV6=1" pixocash-qt.pro
make
```

## License

This project is licensed under the MIT License http://opensource.org/licenses/MIT.  Copyright (c) 2009-2012 Bitcoin Core Developers, Copyright © 2011-2012 Litecoin Developers, Copyright © 2018 PixoCash.org, Copyright © 2018 PixoCash Developers, PIXO™.
## Acknowledgments

* Acknowledgement to anyone who's code was used!
* All the parents to my coin!
* Inspiration - Bitcoin, Satoshi Nakamoto, Charlie Lee, and Vitalik Buterin (someone reminded me to put his name down)!
* My parents, my sister and brother, and my wife!

## Donations

* BTC ```1MdLg5jSQ94GaEHNxoYxfJdeSDuKdn4g7T```
* ETH ```0x29942d09e21fd14e7a68feff4d07fa7000342eda```
* LTC ```M8mQPsVZD7KVR3SFLXHGaAqkiA9pdptvsu```
* BCH ```qpfv8gfu0jdnf49w5x2ezdu2jh07vuzxnu4433uz0j```

