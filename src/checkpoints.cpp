// Copyright (c) 2009-2012 The Bitcoin developers
// Copyright (c) 2011-2012 Litecoin Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <boost/assign/list_of.hpp> // for 'map_list_of()'
#include <boost/foreach.hpp>

#include "checkpoints.h"

#include "main.h"
#include "uint256.h"

namespace Checkpoints
{
    typedef std::map<int, uint256> MapCheckpoints;

    //
    // What makes a good checkpoint block?
    // + Is surrounded by blocks with reasonable timestamps
    //   (no blocks before with a timestamp after, none after with
    //    timestamp before)
    // + Contains no strange transactions
    //
    static MapCheckpoints mapCheckpoints =
        boost::assign::map_list_of // Checkpoint 0 hash == Genesis block hash.
        (         0, uint256("0xc0e3904169011c8e4557ff3af19b1337a4fd576b7936a5bc037f9133f6dc055f"))
        (         1, uint256("0x99f8047664d4ec254033582a570e9bdf9077a81b6b13807aff92aa9617f548b1"))
        (         2, uint256("0x632f0c7bc6b810d01142ef61b2a5342a43f1bf5aa046202c85f2e1920838dcd8"))
        (         3, uint256("0x108c6e5848c28a1d6b7eb11b61b2972c7cbb3246412e51ada4de4dabf6f57b85"))
        (         4, uint256("0x4874a8c31eb017cf60df2d38acfbe57ed58863b284bc52854056214da6af4667"))
        (         5, uint256("0x981ee4705232b56276ab51e972966914d402bc0ee4db0cb8535f15434e1541b0"))
        (         100, uint256("0x0f9ac2c7081a0441ed7d96b6ccbf23f35ac4c620e1ee7c8b4a9d36352b1c2533"))
        (         121, uint256("0x033f0cc53e3e6bb9ea9e785b2be713de00888c2d666ded58629909989643188f"))
        (         150, uint256("0x8bd69dd2c3d08e02bbcda5c9d536c801b44f46ae7d85d2f8768a74806fce7736"))
        (         180, uint256("0x381bf23dee48f17fd176def90115f5d7c2025967de2e02d67c01d123a009a210"))
        (         200, uint256("0x04b2f7a4515801edecc3e0b9bd5ba46e4e3e039f9ec8d025e2528b7959d11e25"))
        ;

    bool CheckBlock(int nHeight, const uint256& hash)
    {
        if (fTestNet) return true; // Testnet has no checkpoints

        MapCheckpoints::const_iterator i = mapCheckpoints.find(nHeight);
        if (i == mapCheckpoints.end()) return true;
        return hash == i->second;
    }

    int GetTotalBlocksEstimate()
    {
        if (fTestNet) return 0;
        // return 0;
        return mapCheckpoints.rbegin()->first;
    }

    CBlockIndex* GetLastCheckpoint(const std::map<uint256, CBlockIndex*>& mapBlockIndex)
    {
        if (fTestNet) return NULL;

        BOOST_REVERSE_FOREACH(const MapCheckpoints::value_type& i, mapCheckpoints)
        {
            const uint256& hash = i.second;
            std::map<uint256, CBlockIndex*>::const_iterator t = mapBlockIndex.find(hash);
            if (t != mapBlockIndex.end())
                return t->second;
        }
        return NULL;
    }
}
