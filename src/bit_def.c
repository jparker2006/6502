#include "../include/bit_def.h"

bit mask_bit(bit a) {
    a &= BIT_MASK;
    return a;
}
