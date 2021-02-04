// reads characters from its input
// writes the same characters to its output 
// any upper case letters are replaced by their as lower case equivalent.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char *argv[]) {
    char c;
    // while (scanf("%c", &c) == 1){
    //     if (isupper(c)) {
    //         c = tolower(c);
    //     }
    //     printf("%c", c);
    // }
    while ((c = getchar()) != EOF) {
        putchar(tolower(c));
    }
    return 0;
}