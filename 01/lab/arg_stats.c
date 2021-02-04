// given 1 or more command line arguments
// prints the minimum and maximum values 
// the sum and product of all the values
// and the mean of all the values.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc == 1) {
        printf("Usage: %s NUMBER [NUMBER ...]\n", argv[0]);
        exit(EXIT_FAILURE);
    } else {
        int min = atoi(argv[1]);
        int max = atoi(argv[1]);
        int sum = 0; 
        int prod = 1;
        for (int i = 1; i < argc; i++) {
            min = min < atoi(argv[i]) ? min : atoi(argv[i]);
            max = max > atoi(argv[i]) ? max : atoi(argv[i]);
            sum += atoi(argv[i]);
            prod *= atoi(argv[i]);
        } 
    printf("MIN:  %d\n", min);
    printf("MAX:  %d\n", max);
    printf("SUM:  %d\n", sum);
    printf("PROD: %d\n", prod);
    printf("MEAN: %d\n", sum / (argc - 1));
    return 0;
    }
}
