# Week 02 Tutorial Answers 

1. consider a scenario where we have the following flags contorlling access to a device 

   ```c
   #define READING   0x01
   #define WRITING   0x02
   #define AS_BYTES  0x04
   #define AS_BLOCKS 0x08
   #define LOCKED    0x10
   ```

   The flags are contained in an 8-bit register, defined as:

   ```c
   unsigned char device;
   ```

   Write C expressions to implement each of the following:

   1. mark the device as **locked** for **reading** **bytes**

      **device = (READING | AS_BYTES | LOCKED)**

   2. mark the device as locked for writing blocks

      **device = (LOCKED | WRITING | AS_BLOCKS)**

   3. set the device as locked, leaving other flags unchanged

      **device = device | LOCKED** 

   4. remove the lock on a device, leaving other flags unchanged

      **device = device & ~LOCKED** 

   5. switch a device from reading to writing, leaving other flags unchanged

      **device = (device & ~READING) | WRITING** 

   6. swap a device between reading and writing, leaving other flags unchanged

      **device = device ^ (READING | WRITING)**

2. What is the effect of each of the `static` declarations in the following program fragment:

   ```c
   #include <stdio.h>
   static int x1;
   ...
   static int f(int n) {
       static int x2 = 0;
       ...
   }
   ```

   In C, the `static` keyword is a storage-class specifier: it specifies variable locations and function visibility. 

   The `static` specifier on the `x1` variable has the effect of making it **inaccessible from any other `.c` file**. It is still available in all of the functions below the declaration, and will **be stored in the `data` region of memory**, with all of the other global variables.

   The `static` specifier on the `f()` function has a similar effect on the visibility of the function. It is accessible from any function below the declaration, but is **inaccessible from functions defined before `f()`, and from in other `.c` files.**

