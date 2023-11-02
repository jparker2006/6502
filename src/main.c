#include "../include/main.h"

int main() {
    // run_test_suite();

    struct Byte *b = new_0x00_byte(true);
    print_byte(b);
    flip_bit(b, 7);
    print_byte(b);
    return 0;
}
