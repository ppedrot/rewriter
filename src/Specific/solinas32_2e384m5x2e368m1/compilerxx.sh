#!/bin/sh
set -eu

g++ -march=native -mtune=native -std=gnu++11 -O3 -flto -fomit-frame-pointer -fwrapv -Wno-attributes -DPRIulimb=PRIu32 -Da24_val='12345' -Dq_mpz='(1_mpz<<384) - 5*(1_mpz<<368) - 1' -Dlimb_t=uint32_t -Dmodulus_bytes_val='48' -Dlimb_weight_gaps_array='{24,24,24,24,24,24,24,24,24,24,24,24,24,24,24,24}' -Dmodulus_limbs='16' -Dmodulus_array='{0xff,0xfa,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff}' -DPRIxlimb=PRIx32 -Da24_hex='0x3039' -Da_minus_two_over_four_array='{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x39}' "$@"
