#include <stdio.h>
#include <stdlib.h>
#define SERIES_MAX 46

int fib(int n, int memo[]) {
    if (n <= 0 || n > SERIES_MAX) {
        return 0; 
    }
    if (memo[n] != 0) {
        return memo[n];
    }
    int res = fib(n-1, memo) + fib(n-2, memo);
    memo[n] = res;
    return res;
}

int main (void) {
    int memo[SERIES_MAX + 1] = {0, 1}; 
    int n; 
    while (scanf("%d\n", &n) == 1) {
        printf("%d\n", fib(n, memo));
    }
    return EXIT_SUCCESS;
}
