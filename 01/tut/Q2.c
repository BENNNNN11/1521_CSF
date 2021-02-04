// Now consider what happens during the execution of this program and answer the following:
int  a;
char b[100];

int fun1() {
    int c, d;
    // ...
}

double e;

int fun2() {
    int f;
    static int ff;
    // ...
    fun1();
    // ...
}

int g;

int main(void) {
    char h[10];
    int i;
    // ...
    fun2();
    // ...
}

// Which variables are accessible from within main()?
    // a, b, e, g, h, i
// Which variables are accessible from within fun2()?
    // a, b, e, f, ff 
// Which variables are accessible from within fun1()?
    // a, b, c, d 
// Which variables are removed when fun1() returns?
    // c, d 
// Which variables are removed when fun2() returns?
    // f
// How long does the variable f exist during program execution?
    // The variable f exists only while fun2 is "executing"
// How long does the variable g exist during program execution?
    // The variable g exists for the entire duration of program execution
    