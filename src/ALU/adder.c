#include "../include/ALU/adder.h"

bit* half_adder(bit a, bit b) {
    bit sum = xor(a, b);
    bit carry = and(a, b);
    bit* output = malloc(sizeof(bit) * 2);
    output[0] = sum; output[1] = carry;
    return output;
}

bit* full_adder(bit a, bit b, bit carry_in) {
    bit* ab_half_adder = half_adder(a, b);
    bit* ab_carry_in_half_adder = half_adder(ab_half_adder[0], carry_in);
    bit sum = ab_carry_in_half_adder[0];
    bit carry_out = or(ab_half_adder[1], ab_carry_in_half_adder[1]);
    bit* output = malloc(sizeof(bit) * 2);
    output[0] = sum; output[1] = carry_out;
    return output;
}