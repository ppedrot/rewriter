#!/bin/sh
set -eu

gcc -march=native -mtune=native -std=gnu11 -O3 -flto -fomit-frame-pointer -fwrapv -Wno-attributes -DPRIulimb=PRIu32 -Da24_val='12345' -Dq_mpz='(1_mpz<<166) - 5' -Dlimb_t=uint32_t -Dmodulus_bytes_val='21' -Dlimb_weight_gaps_array='{16,15,15,15,15,15,15,15,15,15,15}' -Dmodulus_limbs='11' -Dmodulus_array='{0x3f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfb}' -DPRIxlimb=PRIx32 -Da24_hex='0x3039' -Da_minus_two_over_four_array='{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x39}' "$@"
