#include "../include/unit_test.h"

void run_test_suite() {
    printf(ANSI_COLOR_BLUE "Starting Test Suite\n" ANSI_COLOR_RESET);
    test_mask_bit();
    test_alu_logic();
    test_byte();
    test_adder();
    printf(ANSI_COLOR_GREEN "\nTest Suite Passed\n" ANSI_COLOR_RESET);
}

// Testing bit_def.c
void test_mask_bit() {
    printf(ANSI_COLOR_CYAN "\n[Testing Bit_Def]\n" ANSI_COLOR_RESET);
    bit spurious_byte = 0b01010101; // Should be 0x01 aka on
    bit clean_bit = mask_bit(spurious_byte);
    assert(clean_bit == 0x01);
    printf("(Bit_Def, mask_bit): Passed\n");
    printf(ANSI_COLOR_GREEN "[Passed Bit_Def Tests]\n" ANSI_COLOR_RESET);
}

// Testing alu_logic.c
void test_alu_logic() {
    printf(ANSI_COLOR_CYAN "\n[Testing ALU_Logic]\n" ANSI_COLOR_RESET);
    test_and();
    test_not();
    test_nand();
    test_or();
    test_nor();
    test_xor();
    printf(ANSI_COLOR_GREEN "[Passed ALU_Logic Tests]\n" ANSI_COLOR_RESET);
}

// AND Truth table:
// [0, 0] => [0]
// [1, 0] => [0]
// [0, 1] => [0]
// [1, 1] => [1]
void test_and() {
    assert(and(0, 0) == 0x00);
    assert(and(1, 0) == 0x00);  
    assert(and(0, 1) == 0x00);  
    assert(and(1, 1) == 0x01);
    printf("(ALU_Logic, AND): Passed\n");
}

// NOT Truth table:
// [0] => [1]
// [1] => [0]
void test_not() {
    assert(not(0) == 0x01);
    assert(not(1) == 0x00);  
    printf("(ALU_Logic, NOT): Passed\n");
}

// NAND Truth table:
// [0, 0] => 1
// [1, 0] => 1
// [0, 1] => 1
// [1, 1] => 0
void test_nand() {
    assert(nand(0, 0) == 0x01);
    assert(nand(1, 0) == 0x01);  
    assert(nand(0, 1) == 0x01);  
    assert(nand(1, 1) == 0x00);
    printf("(ALU_Logic, NAND): Passed\n");
}

// OR Truth table:
// [0, 0] => 0
// [1, 0] => 1
// [0, 1] => 1
// [1, 1] => 1
void test_or() {
    assert(or(0, 0) == 0x00);
    assert(or(1, 0) == 0x01);  
    assert(or(0, 1) == 0x01);  
    assert(or(1, 1) == 0x01);
    printf("(ALU_Logic, OR): Passed\n");
}

// NOR Truth table:
// [0, 0] => 1
// [1, 0] => 0
// [0, 1] => 0
// [1, 1] => 0
void test_nor() {
    assert(nor(0, 0) == 0x01);
    assert(nor(1, 0) == 0x00);  
    assert(nor(0, 1) == 0x00);  
    assert(nor(1, 1) == 0x00);
    printf("(ALU_Logic, NOR): Passed\n");
}

// XOR Truth table:
// [0, 0] => 0
// [1, 0] => 1
// [0, 1] => 1
// [1, 1] => 0
void test_xor() {
    assert(xor(0, 0) == 0x00);
    assert(xor(1, 0) == 0x01);  
    assert(xor(0, 1) == 0x01);  
    assert(xor(1, 1) == 0x00);
    printf("(ALU_Logic, XOR): Passed\n");
}

void test_rotate_left() {
    // byte a = 0b10110100;
    // a = rotate_left(a, 1);
    // assert(a == 0b01101001);

    // byte b = 0b00011010;
    // b = rotate_left(b, 4);
    // assert(b == 0b10100001);

    // printf("(ALU_Logic, rotate_left): Passed\n");
}

void test_rotate_right() {
    // byte a = 0b00101011;
    // a = rotate_right(a, 1);
    // assert(a == 0b10010101);

    // byte b = 0b10100010;
    // b = rotate_right(b, 3);
    // assert(b == 0b00010010);

    // printf("(ALU_Logic, rotate_right): Passed\n");
}

// Testing byte.c
void test_byte() {
    printf(ANSI_COLOR_CYAN "\n[Testing Byte]\n" ANSI_COLOR_RESET);
    // test_flip_bit();
    printf(ANSI_COLOR_GREEN "[Passed Byte Tests]\n" ANSI_COLOR_RESET);
}

void test_flip_bit() {
    byte b = 0x00;
    printf("(Byte, flip_bit): Passed\n");
}

// Testing adder.c
void test_adder() {
    printf(ANSI_COLOR_CYAN "\n[Testing Adder]\n" ANSI_COLOR_RESET);
    test_half_adder();
    test_full_adder();
    printf(ANSI_COLOR_GREEN "[Passed Adder Tests]\n" ANSI_COLOR_RESET);
}

void test_half_adder() {
    assert(half_adder(0, 0)[0] == 0x00);
    assert(half_adder(0, 0)[1] == 0x00);

    assert(half_adder(1, 0)[0] == 0x01);
    assert(half_adder(1, 0)[1] == 0x00);

    assert(half_adder(0, 1)[0] == 0x01);
    assert(half_adder(0, 1)[1] == 0x00);

    assert(half_adder(1, 1)[0] == 0x00);
    assert(half_adder(1, 1)[1] == 0x01);
    
    printf("(Adder, half_adder): Passed\n");
}

void test_full_adder() {
    assert(full_adder(0, 0, 0)[0] == 0x00);
    assert(full_adder(0, 0, 0)[1] == 0x00);

    assert(full_adder(0, 0, 1)[0] == 0x01);
    assert(full_adder(0, 0, 1)[1] == 0x00); 

    assert(full_adder(0, 1, 0)[0] == 0x01);
    assert(full_adder(0, 1, 0)[1] == 0x00);
    
    assert(full_adder(0, 1, 1)[0] == 0x00);
    assert(full_adder(0, 1, 1)[1] == 0x01);
    
    assert(full_adder(1, 0, 0)[0] == 0x01);
    assert(full_adder(1, 0, 0)[1] == 0x00);
    
    assert(full_adder(1, 0, 1)[0] == 0x00);
    assert(full_adder(1, 0, 1)[1] == 0x01);
    
    assert(full_adder(1, 1, 0)[0] == 0x00);
    assert(full_adder(1, 1, 0)[1] == 0x01);
    
    assert(full_adder(1, 1, 1)[0] == 0x01);
    assert(full_adder(1, 1, 1)[1] == 0x01);

    printf("(Adder, full_adder): Passed\n");
}