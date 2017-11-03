#!/bin/sh
set -eu

gcc -march=native -mtune=native -std=gnu11 -O3 -flto -fomit-frame-pointer -fwrapv -Wno-attributes -DPRIulimb=PRIu64 -Da24_val='12345' -Dq_mpz='(1_mpz<<216) - (1_mpz<<108) - 1' -Dlimb_t=uint64_t -Dmodulus_bytes_val='27' -Dlimb_weight_gaps_array='{54,54,54,54}' -Dmodulus_limbs='4' -Dmodulus_array='{0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xef,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff}' -DPRIxlimb=PRIx64 -Da24_hex='0x3039' -Da_minus_two_over_four_array='{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x39}' "$@"
