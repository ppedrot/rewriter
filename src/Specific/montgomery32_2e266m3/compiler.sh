#!/bin/sh
set -eu

gcc -fno-peephole2 `#GCC BUG 81300` -march=native -mtune=native -std=gnu11 -O3 -flto -fomit-frame-pointer -fwrapv -Wno-attributes -Wno-incompatible-pointer-types -fno-strict-aliasing -DPRIulimb=PRIu32 -Da24_val='12345' -Dq_mpz='(1_mpz<<266) - 3' -Dlimb_t=uint32_t -Dmodulus_bytes_val='34' -Dlimb_weight_gaps_array='{32,32,32,32,32,32,32,32,32}' -Dmodulus_limbs='9' -Dmodulus_array='{0x03,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd}' -DPRIxlimb=PRIx32 -Da24_hex='0x3039' -Da_minus_two_over_four_array='{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x39}' "$@"
