//
// Created by Ben on 2021-01-18.
//
// Demonstrate C bitwise operations of 16 bit values

#include "print_bits.h"
#include <stdint.h>
#include <stdio.h>

void print_bits_hex(char *description, uint16_t n);

int main(void) {
    uint16_t a = 0;
    printf("Enter a: ");
    scanf("%hd",  &a);

    uint16_t b = 0;
    printf("Enter b: ");
    scanf("%hd",  &b);

    uint16_t c = 0;
    printf("Enter c: ");
    scanf("%hd",  &c);

    print_bits_hex("     a = ", a);
    print_bits_hex("     b = ", b);
    print_bits_hex("    ~a = ", ~a);
    print_bits_hex(" a & b = ", a & b);
    print_bits_hex(" a | b = ", a | b);
    print_bits_hex(" a ^ b = ", a ^ b);
    print_bits_hex("a >> c = ", a >> c);
    print_bits_hex("a << c = ", a << c);
    return 0;
}

// print description then print binary, hexadecimal and decimal value
void print_bits_hex(char *description, uint16_t value){
    printf("%s", description);
    print_bits(value, 8 * sizeof(value));
    printf(" = 0x%04x = %d\n", value & 0xFFFF, value);
}