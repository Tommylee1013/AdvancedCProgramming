//
// Created by Junghun Lee on 12/29/23.
//
#include <stdio.h>

//main
int main(void) {
    int a = 5;
    int b = -3;

    printf(" %d <  %d is  %d\n", a, b, a < b);
    printf(" %d >  %d is  %d\n", a, b, a > b);
    printf(" %d <= %d is  %d\n", a, b, a <= b);
    printf(" %d >= %d is  %d\n", a, b, a >= b);
    printf(" %d == %d is  %d\n", a, b, a == b);
    printf(" %d != %d is  %d\n", a, b, a != b);
    printf("\"a는 5 이고 b는  3\" is  %d\n", (a==5) && (b==3));
    printf("\"a는 5 이고 b는 -3\" is  %d\n", (a==5) && (b==-3));

    return 0;
}