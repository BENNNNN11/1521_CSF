//
// Created by Ben on 2021-01-17.
//
#include <stdint.h>
#include <stdio.h>
#include "print_bits.h"

// extract the nth bit from a value
int get_nth_bit(uint64_t value, int n){
    // shift the bit right n bits
    // this leaves the nth bit as the least significant bit
    uint64_t shifted_value = value >> n;

    // zero all bits except the least significant bit
    int bit = shifted_value & 1;
    return bit;
}


// print the bottom how_many_bits bits of value
void print_bits(uint64_t value, int how_many_bits) {
    // print the bits from most significant bit to least significant
    for (int i = how_many_bits - 1; i >= 0; i--) {
        int bit = get_nth_bit(value, i);
        printf("%d", bit);
    }
}

int main(void) {
    int a = 0;
    printf("Enter an integer: ");
    scanf("%d", &a);

    int n_bits = 8 * sizeof(a);
    print_bits(a, n_bits);
    printf("\n");
    return 0;
}