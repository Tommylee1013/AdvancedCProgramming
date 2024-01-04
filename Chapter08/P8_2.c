//
// Practice 8-2
// Created by Junghun Lee on 1/4/24.
//
#include <stdio.h>

// main
int main(void) {
    // local declaration
    int a;
    int * p; // pointer
    int ** q; // pointer to pointer
    int *** r; // pointer to pointer to pointer

    p = & a;
    q = & p;
    r = & q;

    printf("Enter a number : ");
    scanf("%d", & a);
    printf("The number is : %d\n", a);

    printf("Enter a number : ");
    scanf("%d", p);
    printf("The number is : %d\n", a);

    printf("Enter a number : ");
    scanf("%d", * q);
    printf("The number is : %d\n", a);

    printf("Enter a number : ");
    scanf("%d",  ** r);
    printf("The number is : %d\n", a);

    return 0;
}