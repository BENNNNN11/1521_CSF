//
// Created by Ben on 2021-01-17.
//

#include <stdio.h>
#include <stdint.h>
#include "print_bits.h"

int main (void) {
    for (int i = -128; i < 128; i++) {
        printf("%4d ", i);
        print_bits(i, 8);
        printf("\n");
    }
    return 0;
}