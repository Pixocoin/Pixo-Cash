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
        (         1, uint256("0X260a96b25a79f09eec27faadbdc37bd971b1677cd5c5e0630667c94be49038d4"))
        (       100, uint256("0xd38637f07bb9fe3ec58f655f862d4ddee8e284f7dd4975cce9cdb7216dfb729e"))
        (       117, uint256("0x921e449ed0f4040cc77be79799fa1e169ae23285adebf2fc7b8c32e6025309e8"))
        (       200, uint256("0xd0bbb2c917e58ab283e28f58b5229c185785d41318c0a59d59cdc4a04fa3829c"))
        (       208, uint256("0x891177b469e50bb1bfb94ce4a4383393201769c2303aa398332b4c1d2810a2a6"))
        (       220, uint256("0x0df46f1fa3686f35f27de87978a44f8902e63e2c91a82a3820c8084a6b364d4f"))
        (       282, uint256("0x1ea98e024740bab41b31519e2ac22da40c655b5961d9f9cc91ab8219365d5fb4"))
        (       300, uint256("0x1b69378f6e880d2b67bdbc239c3241088060751fd891bccf37be9f9338b7113e"))
        (       309, uint256("0x0907a383e4cf846a83fcb7caaa798d59c2e675255f97a27bb7118ec8604aeccc"))
        (       339, uint256("0x4628b2968d84a97d772df4fe2f431598135069783895fee64aa9599e9f5aeca0"))
        (       341, uint256("0xf5774face1962526d57ede2e2b88245ea1fce4d36d675d52e3e86d98835f43ac"))
        (       350, uint256("0x0f2ba80341baa16e91c4fc270efb39f292ca00c6a492bc9fce429b91330d8db6"))
        (       853, uint256("0xc13ec9de297007f89c2652d5d6a9cad6bd6189f5e956d093c740d61d4ffff2f6"))
        (       855, uint256("0xcd9e5ff2db4bfed5507f09dccd44d2a5a0af311cdcdb0d1b0099d2cd650c66a7"))
        (       860, uint256("0xd0d0eb71418dbba125e868ac4e6e643828d0a1c24cd96e8fad92d5f61fb5ea5d"))
        (       930, uint256("0xa2ae91102475f89943cfc7ee8555d5f85c301f02d9c0306d2d97ff4d31c347ab"))
        (       980, uint256("0x185cfdb4cb81b7c169b95d94cf2c67382eb94246d252b5c9193715a7909b5ecf"))
        (       997, uint256("0x1102219df9321e542b3b58467c9550fafe23d14659eb317bcee19ca7b6dd4f9a"))
        (      1000, uint256("0xc6cfc608857f2cad30297a4df4da2c49c13180ae5389f22f7b6f0e512a5951df"))
        (      1010, uint256("0x7dfef939edb33cc8303cbd9e12f580340689bb19584b1576bba5d1c8e9ae7b69"))
        (      1181, uint256("0xe5220a31d2ba1b365d45024821034e3817937e5380496ec2477eea2c8f918d23"))
        (      1193, uint256("0x28da0fa3c5ac49fa9585ebc88b5d8b5d179ce99208b64ac41c545c2d6bf74e0e"))
        (      1200, uint256("0x759955475a71809f2761dbfab526c3533613398b31b361308d10fdeba509142f"))
        (      1312, uint256("0xf064ac9935b2b93e004b1a8049d3513b8dc0ff581b679e6d99b5604ab6b96d60"))
        (      1371, uint256("0x724be42e8f563b34257361f2a997f9427bfe540d6228d6700b17a30a38926a0c"))
        (      1400, uint256("0x32ae20555bac32e0f20324d9ce6942e52e81bc42546f57904e990fbb00666ee8"))
        (      1420, uint256("0x7b9582bb8722ac965fd7cc3ce2bd378f2213350a97a35c8853107abb8b48ebb5"))
        (      1433, uint256("0x385a4f6a9b37e3392e51f6a661fadb78a85a7da8545eed14a569e5c43f9e1d56"))
        (      1442, uint256("0x6f3ae205ef2370b3e04480f447d2f3f029f27165852755c18db31dd0778b5b63"))
        (      1443, uint256("0x8f6cf35e010797f563e084963d5e6a3a2316fc5132d9ddbd578f402ecd965219"))
        (      1600, uint256("0xb621a2d4e5756d345ae3660b23b33ce5aad1570369e6297ab8599fc86960200b"))
        (      1610, uint256("0x71f1a33a4cddd99ec4476c1459a179b25f0a83e5eaf4799b7bc116a46e69b134"))
        (      1616, uint256("0x0b2577be9e46e21496f86e0012e341bf9c868d44d6d75058208c2b24c2ae7441"))
        (      1632, uint256("0x84408326a8df6dc61b9cef19689c4db8d18b1c3c65e32da5766c96758bd76468"))
        (      1658, uint256("0x70dd4a23941f275181d5fa888e85f7ee4401fbd252e2d24d50bd2f8939bed4ff"))
        (      1700, uint256("0x37d1ff5420078aad9d05af0a939cf8b8a74c76f2e21e738a3e7e510617663d26"))
      //  (         60, uint256("0x822adc4da8d411c0cd053be7ff2967ccb2368f0fcc8eb73d62296bac14759e8d"))
     //   (         70, uint256("0xb280924e985a479829296c68702b20b3e5cd08e6b98291ca297494e06c9c448c"))
     //   (         80, uint256("0x425f4c22acf8117dfff1b87a9b0b5a2472f45e9f69258928850fc668dbdecfc3"))
     //   (         90, uint256("0xa5cae53fca690905839b70810e9f475ef474562e25967059a53170ca870fbcbd"))
      //  (         100, uint256("0x0f9ac2c7081a0441ed7d96b6ccbf23f35ac4c620e1ee7c8b4a9d36352b1c2533"))
    //    (         110, uint256("0xc6f290e5d5423e427dea963e7ca64fa5e72cc54fdbfcc2cd6bedb2b97e454205"))
     //   (         120, uint256("0x4b6d2513f1ba003345fcac67dbbd4e4c3059c44f16dbbfea098e15e4bcc5d31a"))
     //   (         130, uint256("0xe99900e4066048785c89e56ffb94a395d3ab5baa209fd8403a6cf1204ace09bc"))
     //   (         140, uint256("0xd67dacc6090c2edd834e41724c8bc645c0cf9262fc662295a452058368ccc7e8"))
     //   (         150, uint256("0x8bd69dd2c3d08e02bbcda5c9d536c801b44f46ae7d85d2f8768a74806fce7736"))
     //   (         160, uint256("0x4daa7c5218fc1ce2569f4623900b7f24442ef447674d08d5bd0e1d32a8ea536b"))
     //   (         170, uint256("0xc1d036caa083e3b66e6ec2bc31076e00ede73becd02eb056f7a59dbb9b9f2902"))
      //  (         180, uint256("0x381bf23dee48f17fd176def90115f5d7c2025967de2e02d67c01d123a009a210"))
     //   (         190, uint256("0xa52244d92da1699d40bf9ed5b1c1b6d635d558675e5475c9dd7d19c0a30e1d68"))
      //  (         200, uint256("0x04b2f7a4515801edecc3e0b9bd5ba46e4e3e039f9ec8d025e2528b7959d11e25"))
     //   (         210, uint256("0xe0d9c302f939a00c83f6e9a6adb97f18a25ecfbce0b48eec45daa9163d8e1eb0"))
     //   (         220, uint256("0xd0f7ae09e654563561a807d99932534bebe2c44ef0795c38d083127df98077e7"))
     //   (         230, uint256("0xb0fad651ab87f7b7db550df072123f2b5be44b3f07e7267ac16fc37e63ec2e72"))
     //   (         240, uint256("0xa2976e5390e69fafd54353971d4ea2889e8acc484aa59cee8ad34fcb0ac613b1"))
     //   (         250, uint256("0x335201c5412063f897ec5b5991221925bf9039849ef4fd9ffc572f211c7afe80"))
      //  (         260, uint256("0xab32c020c345cbfe3dd6ee9e4de111cc9b6f7341a175441e3ec61edca83f44d0"))
     //   (         270, uint256("0x8fca2710b00a38ee04a9dbfe8617577d868c350baa28df5b4f95f4cb012115f1"))
     //   (         280, uint256("0x2f383d84f5999225f973d318eb6f4f9122f0b07850ce6a9beddd186ad2435f70"))
     //   (         290, uint256("0xa3f9b88517961869b5b29a9ddaf0928106364d6a682ab44763a561689fa3aaab"))
     //   (         300, uint256("0xb34c5cb883bf87c8e3c49da0109664f42b3f3095be6601bfc5ffb8cd12e0e576"))
     //   (         310, uint256("0x0e7c8bf085354e66852b01f674d16ba699b4dcb9837eb1c881ee6d5cbc4d7a80"))
      //  (         320, uint256("0xdf3d97c67977699bfa0d3247c444cd3735745fb7ebe2212e50b0934e0e1887b2"))
        
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
        return 0;
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
