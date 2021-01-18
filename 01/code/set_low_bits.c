//
// Created by Ben on 2021-01-18.
// Demonstrate use shift operators and subtraction to obtain a bit pattern of n 1s

#include "print_bits.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "assert.h"

int main (int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <exponent>\n", argv[0]);
        return 1;
    }

    int n = strtol(argv[1], NULL, 0);

    uint32_t mask;
    int n_bits = 8 * sizeof(mask);
    assert(n >= 0 && n < n_bits);
    mask = 1;
    mask = mask << n;
    mask = mask - 1;


    printf("The bottom of %d bits of %u are ones: \n", n, mask);
    print_bits(mask, n_bits);
    printf("\n");
    return 0;
}