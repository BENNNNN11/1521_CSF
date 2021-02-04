// take a single positive integer as a command-line argument 
// and prints the collatz chain for that number.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void helper(int num) {
    printf("%d\n", num);
    if (num == 1) {
        return;
    } else if (num % 2 == 1) {
        helper((3 * num) + 1);
    } else {
        helper(num/2);
    }
}    

int main (int argc, char *argv[]) {
    if (argc == 1) {
        printf("Usage: %s NUMBER\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    helper(atoi(argv[1]));
    return EXIT_SUCCESS; 
}