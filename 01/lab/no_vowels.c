#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    char c; 
    while (scanf("%c", &c) == 1) {
        if (strchr("aeiouAEIOU", c) == NULL) {
        // strchr will return NULL iff
        // c isn't in the string "aAeEiIoOuU"
        // ie. check that c isn't a vowel
            printf("%c", c);
        }
    }
    return 0;
}