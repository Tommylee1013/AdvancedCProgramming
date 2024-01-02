//
// Created by Junghun Lee on 1/2/24.
//

// preprocess
#include <stdio.h>

// function declaration
void mularray(int * x);

// main
int main(void) {
    int i, a[5] = {1,2,3,4,5};

    for (i = 0; i < 5; i++) {
        printf("a[%d] = %d ", i, a[i]);
    }
    printf("\n");

    for (i = 0; i < 5; i++) mularray(& a[i]);

    for (i = 0; i < 5; i++) printf("a[%d] = %d ", i, a[i]);

    printf("\n");
    return 0;
} // main

// function definition
void mularray(int * x) {
    * x *= * x;
}