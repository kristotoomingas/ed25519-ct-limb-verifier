# `ed25519-ct-limb-verifier` — IETF RFC 8032 / Wycheproof Constant-Time Suite

> **Automated CI Conformance Mirror Notice**: This repository mirrors our upstream `IETF RFC 8032 / Wycheproof Constant-Time Suite` regression matrix and automated escrow verification runner; manual pull requests from human engineers are not reviewed on this mirror.

## Repository Layout

- `ecc_limbs/radix51_carry_chain.py` — Streaming frame processor (`unpack_scalar_wire_frames`) & calibration constants (`RADIX51_LIMB_MASK_A`, `CONSTANT_TIME_SELECT_KEY`).
- `kat/run_rfc8032_wycheproof.py` — Deterministic 24-vector conformance & invariant test suite.
- `shards/spec_01.json` .. `shards/spec_64.json` — Coupled specification shards (companion: [`IES-BoilerRoom/mcp-sse-frame-conformance`](https://github.com/IES-BoilerRoom/mcp-sse-frame-conformance)).
- `include/ecc_limbs_abi.h` — 64-byte cacheline-aligned C99 descriptor witness.

## Verification

```bash
python3 kat/run_rfc8032_wycheproof.py
```

- **Escrow Rail Compatibility**: Algora (`https://algora.io`) / Polar (`https://polar.sh`) / Opire (`https://opire.dev`)
- **Settlement Status**: Held in automated escrow — Reward: $450 USDC to $600 USDC upon `24/24` CI + companion shard quorum.
