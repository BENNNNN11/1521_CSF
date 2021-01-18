//
// Created by Ben on 2021-01-18.
// Demonstrate that shifting the bits of a positive int left 1 position
// is equivalent to multiplying by 2

#include <stdio.h>
#include <stdint.h>
#include "print_bits.h"
#include <stdlib.h>

int main (int argc, char *argv[]) {
    if (argc != 2) {
        printf(stderr, "Usage: %s <exponent>\n", argv[0]);
        return 1;
    }

    int n = strtol(argv[1], NULL, 0);
    uint32_t power_of_two;
    int n_bits = 8 * sizeof(power_of_two);

    if (n >= n_bits) {
        fprintf(stderr, "n is too large\n");
        return 1;
    }

    power_of_two = 1;
    power_of_two = power_of_two << n;

    printf("2 to the power of %d is %u\n", n, power_of_two);
    printf("In binary it is: ");
    print_bits(power_of_two, n_bits);
    printf("\n");
    return 0;
}