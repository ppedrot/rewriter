#!/bin/sh
set -eu

gcc -march=native -mtune=native -std=gnu11 -O3 -flto -fomit-frame-pointer -fwrapv -Wno-attributes -DPRIulimb=PRIu64 -Da24_val='12345' -Dq_mpz='(1_mpz<<130) - 5 ' -Dlimb_t=uint64_t -Dmodulus_bytes_val='17' -Dlimb_weight_gaps_array='{44,43,43}' -Dmodulus_limbs='3' -Dmodulus_array='{0x03,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfb}' -DPRIxlimb=PRIx64 -Da24_hex='0x3039' -Da_minus_two_over_four_array='{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x39}' "$@"
