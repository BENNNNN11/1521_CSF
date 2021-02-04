// given text on stdin
// only print lines with an even number of characters to stdout.
#include <stdio.h>
#include <string.h>
#define MAX_LINE_LENGTH 1024
int main() {
    char line[MAX_LINE_LENGTH + 1];
    while (fgets(line, sizeof line, stdin) != NULL) {
        if (!(strlen(line) % 2)) {
            fputs(line, stdout);
        }
    }
}