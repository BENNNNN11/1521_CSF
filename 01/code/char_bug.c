#include <stdio.h>

int main () {
    // Common C bug
    char c; // c should be declared int 
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
    return 0;
}