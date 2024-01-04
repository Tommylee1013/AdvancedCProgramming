//
// Created by Junghun Lee on 1/4/24.
//
#include <stdio.h>

int main(void) {
    int a;
    int b;

    int * _num1 = & a;
    int * _num2 = & b;

    printf("Enter the first number : ");
    scanf("%d", _num1);

    printf("Enter the second number : ");
    scanf("%d", _num2);

    printf("\n");

    printf("%d + %d is %d\n", *_num1, *_num2, *_num1 + *_num2);
    return 0;
} // main