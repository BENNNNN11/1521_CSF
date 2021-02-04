//
// Created by Ben on 2021-01-18.
// copy stdin to stdout xor'ing each byte with value given as argument

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <xor-value>\n", argv[0]);
        return 1;
    }

    int n = strtol(argv[1], NULL, 0);
    if (n < 0 || n > 255) {
        fprintf(stderr, "Usage: %s <xor-value>\n", argv[0]);
        return 1;
    }

    int c;
    while ((c = getchar()) != EOF) {
        //    exclusive-or
        //    ^  | 0  1
        //   ----|-----
        //    0  | 0  1
        //    1  | 1  0
        int xor_c = c ^ n;
        putchar(xor_c);
    }
    return 0;
}
