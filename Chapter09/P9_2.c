//
// Practice 9-2
// Program 10-3
// Created by Junghun Lee on 1/5/24.
//
// preprocess
#include <stdio.h>
#define SIZE 5

// function declaration
void multiply(int * pAry, int size);

int main(void) {
    // local declaration
    int ary[SIZE];
    int * pLast;
    int * pWalk;

    // statement
    pLast = ary + SIZE - 1;
    for (pWalk = ary; pWalk <= pLast; pWalk++) {
        printf("Please enter an integer: ");
        scanf("%d", pWalk);
    } // for

    multiply(ary, SIZE);

    printf("Doubled value is: \n");
    for (pWalk = ary; pWalk <= pLast; pWalk++)
        printf(" %3d", * pWalk);

    return 0;
}

void multiply(int * pAry, int size) {
    int * pWalk;
    int * pLast;

    pLast = pAry + size - 1;
    for (pWalk = pAry; pWalk <= pLast; pWalk++)
        * pWalk = * pWalk * 2;
}