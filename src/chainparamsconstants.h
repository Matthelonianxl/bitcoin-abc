#ifndef BITCOIN_CHAINPARAMSCONSTANTS_H
#define BITCOIN_CHAINPARAMSCONSTANTS_H
/**
 * Chain params constants for each tracked chain.
 * @generated by contrib/devtools/chainparams/generate_chainparams_constants.py
 */

#include <uint256.h>

namespace ChainParamsConstants {
    const uint256 MAINNET_DEFAULT_ASSUME_VALID = uint256S("00000000000000000307337585f9000103c1af9f6a2655fb26ccad992480dfd1");
    const uint256 MAINNET_MINIMUM_CHAIN_WORK = uint256S("0000000000000000000000000000000000000000010a3e29d11e8ea2ac87538f");

    const uint256 TESTNET_DEFAULT_ASSUME_VALID = uint256S("0000000000fdd666224731fc707eee787ad3f3281fd381801ef26d4fcea133f1");
    const uint256 TESTNET_MINIMUM_CHAIN_WORK = uint256S("000000000000000000000000000000000000000000000052a25c79a348846d12");
} // namespace ChainParamsConstants

#endif // BITCOIN_CHAINPARAMSCONSTANTS_H