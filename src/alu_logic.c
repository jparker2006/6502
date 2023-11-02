#include "../include/alu_logic.h"

bit and(bit a, bit b) {
    bit r;
    a = mask_bit(a);
    b = mask_bit(b);
    r = a & b & 0x01;
    return r;
}

bit not(bit a) {
    bit r;
    a = mask_bit(a);
    r = mask_bit(~a);
    return r;
}

bit or(bit a, bit b) {
    bit r;
    a = mask_bit(a);
    b = mask_bit(b);
    r = mask_bit(a | b);
    return r;
}

bit xor(bit a, bit b) {
    bit r;
    a = mask_bit(a);
    b = mask_bit(b);
    r = mask_bit(a ^ b);
    return r;
}

bit nand(bit a, bit b) {
    bit r;
    a = mask_bit(a);
    b = mask_bit(b);
    r = mask_bit(not(and(a, b)));
    return r;
}

bit nor(bit a, bit b) {
    bit r;
    a = mask_bit(a);
    b = mask_bit(b);
    r = mask_bit(not(or(a, b)));
    return r;
}