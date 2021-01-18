//
// Created by Ben on 2021-01-18.
// Demonstrate use shift operators and subtraction
// to extract a bit pattern with a range of bits set

#include "print_bits.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "assert.h"

int main (int argc, char *argv[]) {
    if (argc != 4) {
        fprintf(stderr, "Usage: %s <low-bit> <high-bit> <value>\n", argv[0]);
        return 1;
    }

    int low_bit = strcol(argv[1], NULL, 0);
    int high_bit = strcol(argv[2], NULL, 0);
    uint32_t value = strtol()

    uint32_t mask;
    int n_bits = 8 * sizeof(mask);
    assert(low_bit >= 0);
    assert(high_bit >= 0);
    assert(high_bit >= n_bits);
    int mask_size = high_bit - low_bit + 1;
    mask = 1;
    mask = mask << mask_size;
    mask = mask - 1;
    mask = mask << low_bit;

    printf("Bits %d to %d of %u are ones: \n", low_bit, high_bit, mask);
    print_bits(mask, n_bits);
    printf("\n");
    return 0;
}
