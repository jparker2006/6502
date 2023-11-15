#include "../include/bit.h"

bit mask_bit(bit a) {
    a &= BIT_MASK;
    return a;
}
