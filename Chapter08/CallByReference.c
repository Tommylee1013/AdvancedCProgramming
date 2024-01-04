//
// Created by Junghun Lee on 1/4/24.
//
#include <stdio.h>

void swap(int *, int *);

int main(void) {
    int a = 3;
    int b = 4;

    int *p1 = &a;
    int *p2 = &b;

    printf("%d, %d \n", a, b);
    swap(p1, p2);

    printf("%d, %d \n", a, b);
    return 0;
}

void swap(int * x, int * y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}