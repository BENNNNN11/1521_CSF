#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef unsigned int Word;

Word reverseBits(Word w) {
    Word ret = 0; 
    for (unsigned int bit = 0; bit < 32; bit++) {
        Word wMask = 1u << (31 - bit);
        Word retMask = 1u << bit; 
        if (w & wMask){
            ret = ret | retMask;
        }
    }
    return ret;
}



int main (void) {
    Word w1 = 0x01234567;
    assert(reverseBits(w1) == 0xE6A2C480);
    puts("All tests passed!");
    return 0;
}