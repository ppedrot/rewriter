#!/bin/sh
set -eu

g++ -fno-peephole2 `#GCC BUG 81300` -march=native -mtune=native -std=gnu++11 -O3 -flto -fomit-frame-pointer -fwrapv -Wno-attributes -fno-strict-aliasing -DPRIulimb=PRIu64 -Da24_val='12345' -Dq_mpz='(1_mpz<<235) - 15' -Dlimb_t=uint64_t -Dmodulus_bytes_val='30' -Dlimb_weight_gaps_array='{64,64,64,64}' -Dmodulus_limbs='4' -Dmodulus_array='{0x07,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf1}' -DPRIxlimb=PRIx64 -Da24_hex='0x3039' -Da_minus_two_over_four_array='{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x39}' "$@"
