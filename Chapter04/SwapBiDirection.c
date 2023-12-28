//
// Created by Junghun Lee on 12/28/23.
//

#include <stdio.h>

void swap(int* x, int* y);

int main(void) {
    int a = 10, b = 20;

    printf("%d %d \n", a, b);
    swap(& a, & b);
    printf("%d %d \n", a, b);

    return 0;
}

void swap(int* x, int* y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}