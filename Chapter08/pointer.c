//
// Created by Junghun Lee on 1/4/24.
//
#include <stdio.h>

int main(void) {
    int a = 100;
    int * ptr = &a;

    printf("a : %d\n", a);
    printf("* ptr : %d\n", * ptr);

    printf("&a : %d\n", & a); // address
    printf("ptr : %d\n", ptr); // address

    (* ptr)++;

    printf("a : %d\n", a);
    printf("* ptr : %d\n", * ptr);

    return 0;
}