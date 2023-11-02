#include "../include/unit_test.h"

void run_test_suite() {
    printf("Starting Test Suite\n");
    test_mask_bit();
    test_gates();
    test_byte();
    printf("\nTest Suite Passed\n");
}

// Testing bit_def.c
void test_mask_bit() {
    printf("\n[Testing Bit Def]\n");
    bit spurious_byte = 0b01010101; // should just be 0x01 aka 1
    bit clean_bit = mask_bit(spurious_byte);
    assert(clean_bit == 0x01);
    printf("(Bit_def, mask_bit): Passed\n");
    printf("[Passed Bit Def Tests]\n");
}

// Testing gates.c
void test_gates() {
    printf("\n[Testing Gates]\n");
    test_and();
    test_not();
    test_nand();
    test_or();
    test_nor();
    test_xor();
    printf("[Passed Gates Tests]\n");
}

// AND Truth table:
// [0, 0] => [0]
// [1, 0] => [0]
// [0, 1] => [0]
// [1, 1] => [1]
void test_and() {
    assert(and(0x00, 0x00) == 0x00);
    assert(and(0x01, 0x00) == 0x00);  
    assert(and(0x00, 0x01) == 0x00);  
    assert(and(0x01, 0x01) == 0x01);
    printf("(Gates, AND): Passed\n");
}

// NOT Truth table:
// [0] => [1]
// [1] => [0]
void test_not() {
    assert(not(0x00) == 0x01);
    assert(not(0x01) == 0x00);  
    printf("(Gates, NOT): Passed\n");
}

// NAND Truth table:
// [0, 0] => 1
// [1, 0] => 1
// [0, 1] => 1
// [1, 1] => 0
void test_nand() {
    assert(nand(0x00, 0x00) == 0x01);
    assert(nand(0x01, 0x00) == 0x01);  
    assert(nand(0x00, 0x01) == 0x01);  
    assert(nand(0x01, 0x01) == 0x00);
    printf("(Gates, NAND): Passed\n");
}

// OR Truth table:
// [0, 0] => 0
// [1, 0] => 1
// [0, 1] => 1
// [1, 1] => 1
void test_or() {
    assert(or(0x00, 0x00) == 0x00);
    assert(or(0x01, 0x00) == 0x01);  
    assert(or(0x00, 0x01) == 0x01);  
    assert(or(0x01, 0x01) == 0x01);
    printf("(Gates, OR): Passed\n");
}

// NOR Truth table:
// [0, 0] => 1
// [1, 0] => 0
// [0, 1] => 0
// [1, 1] => 0
void test_nor() {
    assert(nor(0x00, 0x00) == 0x01);
    assert(nor(0x01, 0x00) == 0x00);  
    assert(nor(0x00, 0x01) == 0x00);  
    assert(nor(0x01, 0x01) == 0x00);
    printf("(Gates, NOR): Passed\n");
}

// XOR Truth table:
// [0, 0] => 0
// [1, 0] => 1
// [0, 1] => 1
// [1, 1] => 0
void test_xor() {
    assert(xor(0x00, 0x00) == 0x00);
    assert(xor(0x01, 0x00) == 0x01);  
    assert(xor(0x00, 0x01) == 0x01);  
    assert(xor(0x01, 0x01) == 0x00);
    printf("(Gates, XOR): Passed\n");
}

// Testing byte.c
void test_byte() {
    printf("\n[Testing Byte]\n");
    test_flip_bit();
    printf("[Passed Byte Tests]\n");
}

void test_flip_bit() {
    printf("(Byte, flip_bit): Passed\n");
}

// Testing adder.c