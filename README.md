<p align="center">
	<img src="https://firebasestorage.googleapis.com/v0/b/tinyimageio.appspot.com/o/00c6fb54-9f28-4218-a7ac-7d769328bc14-logo-400x400.png?alt=media&token=2a408165-9dc0-4502-a70c-881696f1c83d"/>
</p>

# Pixo® Cash (PIXOC)
* __Website:__ www.pixocash.org
* __Twitter:__ [https://twitter.com/pixocoin](https://twitter.com/pixocoin)
* __Discord:__ [https://discord.gg/33MZM3y](https://discord.gg/33MZM3y)
* __Telegram:__ [https://t.me/PixoCash](https://t.me/PixoCash)

Pixo® Cash is a decentralized pseudonymous digital asset built on cryptography with peer-to-peer networking powered by Blockchain technology.  A derivative of bitcoin/litecoin.  Scrypt hashing algorithms.

## Specifications
* Coin Name = Pixo® Cash
* Ticker = PIXOC
* ICO = N/A
* Algorithm = Scrypt
* Type = PoW
* Block Reward = 3.00
* Re-Target = 1 block
* Total Supply = 81,000,000
* Block Time = 360 sec
* Coin Maturity = 120 blocks
* Transaction Confirmations = 6 blocks
* Block Size = 2 MB
* Decimals = 8
* Address letter = P
* RPC Port = 55664
* Port = 55665

## Development
### Build 3.0.0 Wallet Build 3.1.0
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

or

make -f makefile.unix USE_UPNP=1 USE_QRCODE=1 USE_IPV6=1

./PixoCashd
cd ..
qmake "USE_UPNP=1" "USE_QRCODE=1" "USE_IPV6=1" pixocash-qt.pro
make
```
## Deployment on Ubuntu 18.04

```
Before deployment run:

wget http://www.openssl.org/source/openssl-1.0.2a.tar.gz
tar -xvzf openssl-1.0.2a.tar.gz
cd openssl-1.0.2a
./config --prefix=/usr/
make
sudo make install

sudo apt-get install libssl1.0-dev

If you get an error:

makefile.unix:138: recipe for target 'obj/net.o' failed
make: *** [obj/net.o] Error 1

go to net.cpp file and change:

array<int, THREAD_MAX> vnThreadsRunning;
to
boost::array<int, THREAD_MAX> vnThreadsRunning;

```
## License

This project is licensed under the MIT License http://opensource.org/licenses/MIT.  Copyright (c) 2009-2012 Bitcoin Core Developers, Copyright © 2011-2012 Litecoin Developers, Copyright © 2017-2020 PixoCash.org, Copyright © 2017-2020 PixoCash Developers, PIXO®.
<p align="center">
	<img src="http://tinyimg.io/i/75c1S9Q.png"/>
	<img src="http://tinyimg.io/i/FjwMtST.png"/>
</p>

## Acknowledgments

* Acknowledgement to anyone who's code was used!
* All the parents to my coin!
* Inspiration - Litecoin, Charlie Lee, Vitalik Buterin (someone reminded me to put his name down), and my beautiful dog BeBe and our new dog Louie!

## Donations

* BTC ```1MdLg5jSQ94GaEHNxoYxfJdeSDuKdn4g7T```
* ETH ```0x29942d09e21fd14e7a68feff4d07fa7000342eda```
* LTC ```M8mQPsVZD7KVR3SFLXHGaAqkiA9pdptvsu```
* BCH ```qpfv8gfu0jdnf49w5x2ezdu2jh07vuzxnu4433uz0j```
* PIXOC ```PGmSuuiBAtDGX5Bxqffs1HypCC71FvTd68```
* XMR ```862P2SSNHxdJ3xerTxovyqKs9tY8KaPyc3dtBjpuUhohVozALAmCEiNP7Z32unsn4m4B4UC2qUnrqSSwwRPDZVcCNWPrRpL```
* ZEC ```t1W7X1JJsbgXt9gRu3ujbrJd3KVoDJmPrFs```

