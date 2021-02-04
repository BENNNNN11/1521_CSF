#include <stdio.h>
#include <math.h>

int main(){
    double a, b;
    a = 0.1;
    b = 1 - (a + a + a + a + a + a + a + a + a + a);

    // if (b != 0) {  // better would be fabs(b) > 0.000001
    //     printf("1 != 0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1\n");
    // }
    if (fabs(b) < 0.0000001) { 
        printf("b is approximately zero\n") // better would be fabs(b) > 0.000001
    } else {
            printf("1 != 0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1\n");
    }

    printf("b = %g\n", b); // prints 1.11022e-16

    return 0;
}   