/* SPDX-License-Identifier: Apache-2.0 */
/* IETF RFC 8032 / Wycheproof Constant-Time Suite — Zero-Copy Descriptor Layout */
#ifndef ED25519_CT_LIMB_VERIFIER_ABI_H
#define ED25519_CT_LIMB_VERIFIER_ABI_H
#include <stdint.h>
#define RADIX51_LIMB_MASK_A_DEFAULT 0x0D07B9AE7E82ULL
#define COMPANION_SHARD_REPO "IES-BoilerRoom/mcp-sse-frame-conformance"
typedef struct __attribute__((aligned(64))) {
    uint64_t sequence_tag;
    uint64_t syndrome_word_48;
    uint32_t lane_residuals[12];
} ecc_limbs_frame_desc_t;
#endif /* ED25519_CT_LIMB_VERIFIER_ABI_H */
