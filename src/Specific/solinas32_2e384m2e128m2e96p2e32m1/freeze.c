static void freeze(uint32_t out[16], const uint32_t in1[16]) {
  { const uint32_t x29 = in1[15];
  { const uint32_t x30 = in1[14];
  { const uint32_t x28 = in1[13];
  { const uint32_t x26 = in1[12];
  { const uint32_t x24 = in1[11];
  { const uint32_t x22 = in1[10];
  { const uint32_t x20 = in1[9];
  { const uint32_t x18 = in1[8];
  { const uint32_t x16 = in1[7];
  { const uint32_t x14 = in1[6];
  { const uint32_t x12 = in1[5];
  { const uint32_t x10 = in1[4];
  { const uint32_t x8 = in1[3];
  { const uint32_t x6 = in1[2];
  { const uint32_t x4 = in1[1];
  { const uint32_t x2 = in1[0];
  { uint32_t x32, uint8_t x33 = Op (Syntax.SubWithGetBorrow 24 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (0x0, Return x2, 0xffffff);
  { uint32_t x35, ℤ x36 = Op (Syntax.SubWithGetBorrow 24 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 3) (Syntax.TWord 5) Syntax.TZ) (Return x33, Return x4, 0xff);
  { uint32_t x38, ℤ x39 = Op (Syntax.SubWithGetBorrow 24 Syntax.TZ (Syntax.TWord 5) (Syntax.TWord 3) (Syntax.TWord 5) Syntax.TZ) (Return x36, Return x6, 0x0);
  { uint32_t x41, ℤ x42 = Op (Syntax.SubWithGetBorrow 24 Syntax.TZ (Syntax.TWord 5) (Syntax.TWord 3) (Syntax.TWord 5) Syntax.TZ) (Return x39, Return x8, 0x0);
  { uint32_t x44, uint8_t x45 = Op (Syntax.SubWithGetBorrow 24 Syntax.TZ (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x42, Return x10, 0xffffff);
  { uint32_t x47, uint8_t x48 = Op (Syntax.SubWithGetBorrow 24 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x45, Return x12, 0xfffeff);
  { uint32_t x50, uint8_t x51 = Op (Syntax.SubWithGetBorrow 24 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x48, Return x14, 0xffffff);
  { uint32_t x53, uint8_t x54 = Op (Syntax.SubWithGetBorrow 24 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x51, Return x16, 0xffffff);
  { uint32_t x56, uint8_t x57 = Op (Syntax.SubWithGetBorrow 24 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x54, Return x18, 0xffffff);
  { uint32_t x59, uint8_t x60 = Op (Syntax.SubWithGetBorrow 24 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x57, Return x20, 0xffffff);
  { uint32_t x62, uint8_t x63 = Op (Syntax.SubWithGetBorrow 24 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x60, Return x22, 0xffffff);
  { uint32_t x65, uint8_t x66 = Op (Syntax.SubWithGetBorrow 24 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x63, Return x24, 0xffffff);
  { uint32_t x68, uint8_t x69 = Op (Syntax.SubWithGetBorrow 24 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x66, Return x26, 0xffffff);
  { uint32_t x71, uint8_t x72 = Op (Syntax.SubWithGetBorrow 24 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x69, Return x28, 0xffffff);
  { uint32_t x74, uint8_t x75 = Op (Syntax.SubWithGetBorrow 24 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x72, Return x30, 0xffffff);
  { uint32_t x77, uint8_t x78 = Op (Syntax.SubWithGetBorrow 24 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x75, Return x29, 0xffffff);
  { uint32_t x79 = (uint32_t)cmovznz(x78, 0x0, 0xffffffff);
  { uint32_t x80 = (x79 & 0xffffff);
  { uint32_t x82, uint8_t x83 = Op (Syntax.AddWithGetCarry 24 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (0x0, Return x32, Return x80);
  { uint8_t x84 = ((uint8_t)x79 & 0xff);
  { uint32_t x86, uint8_t x87 = Op (Syntax.AddWithGetCarry 24 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x83, Return x35, Return x84);
  { uint32_t x89, uint8_t x90 = Op (Syntax.AddWithGetCarry 24 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x87, Return x38, 0x0);
  { uint32_t x92, uint8_t x93 = Op (Syntax.AddWithGetCarry 24 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x90, Return x41, 0x0);
  { uint32_t x94 = (x79 & 0xffffff);
  { uint32_t x96, uint8_t x97 = Op (Syntax.AddWithGetCarry 24 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x93, Return x44, Return x94);
  { uint32_t x98 = (x79 & 0xfffeff);
  { uint32_t x100, uint8_t x101 = Op (Syntax.AddWithGetCarry 24 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x97, Return x47, Return x98);
  { uint32_t x102 = (x79 & 0xffffff);
  { uint32_t x104, uint8_t x105 = Op (Syntax.AddWithGetCarry 24 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x101, Return x50, Return x102);
  { uint32_t x106 = (x79 & 0xffffff);
  { uint32_t x108, uint8_t x109 = Op (Syntax.AddWithGetCarry 24 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x105, Return x53, Return x106);
  { uint32_t x110 = (x79 & 0xffffff);
  { uint32_t x112, uint8_t x113 = Op (Syntax.AddWithGetCarry 24 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x109, Return x56, Return x110);
  { uint32_t x114 = (x79 & 0xffffff);
  { uint32_t x116, uint8_t x117 = Op (Syntax.AddWithGetCarry 24 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x113, Return x59, Return x114);
  { uint32_t x118 = (x79 & 0xffffff);
  { uint32_t x120, uint8_t x121 = Op (Syntax.AddWithGetCarry 24 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x117, Return x62, Return x118);
  { uint32_t x122 = (x79 & 0xffffff);
  { uint32_t x124, uint8_t x125 = Op (Syntax.AddWithGetCarry 24 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x121, Return x65, Return x122);
  { uint32_t x126 = (x79 & 0xffffff);
  { uint32_t x128, uint8_t x129 = Op (Syntax.AddWithGetCarry 24 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x125, Return x68, Return x126);
  { uint32_t x130 = (x79 & 0xffffff);
  { uint32_t x132, uint8_t x133 = Op (Syntax.AddWithGetCarry 24 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x129, Return x71, Return x130);
  { uint32_t x134 = (x79 & 0xffffff);
  { uint32_t x136, uint8_t x137 = Op (Syntax.AddWithGetCarry 24 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x133, Return x74, Return x134);
  { uint32_t x138 = (x79 & 0xffffff);
  { uint32_t x140, uint8_t _ = Op (Syntax.AddWithGetCarry 24 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x137, Return x77, Return x138);
  out[0] = x82;
  out[1] = x86;
  out[2] = x89;
  out[3] = x92;
  out[4] = x96;
  out[5] = x100;
  out[6] = x104;
  out[7] = x108;
  out[8] = x112;
  out[9] = x116;
  out[10] = x120;
  out[11] = x124;
  out[12] = x128;
  out[13] = x132;
  out[14] = x136;
  out[15] = x140;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}