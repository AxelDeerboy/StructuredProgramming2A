#include <stdio.h>
#include <string.h>
#include <stdio.h>

#include "./utils.h"

int myInt = 69;
float myFloat = 6.21;

int * pointerInt = &myInt;

int main(){
        
        printf("addres myInt: %p, myInt: %d  \n", &myInt, myInt);
        printf("addres myFloat: %p, myFloat: %f  \n", &myFloat, myFloat);
        printf("address pointerInt: %p, pointerInt: %p\n", &pointerInt, pointerInt);
        *pointerInt = 6;
        printf("addres myInt: %p, myInt: %d  \n", &myInt, myInt);

        // Array myArray;
        Array* myArray = returnArray();
        printf("%d\n", myArray->dirArray[1]);
        
        //malloc(), realloc, calloc(), free();

        return 0;
}