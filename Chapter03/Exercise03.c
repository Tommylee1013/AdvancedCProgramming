//
// Created by Junghun Lee on 12/27/23.
//

#include <stdio.h>

int main(void) {
    int a = 3;
    int b = 4;
    int c = 5;
    int x, y;

    printf("Initial values of the variables: \n");
    printf("a = %d   b = %d   c = %d\n\n", a, b, c);
    printf("value of a * 4 + b / 2 - c * b: %d\n", a * 4 + b / 2 - c * b);
    printf("value of --a * ( 3 + b ) / 2 - c++ * b: %d\n\n", --a * (3 + b) / 2 - c++ * b);

    printf("Value of the variables are now :\n");
    printf("a = %d   b = %d   c = %d\n", a, b, c);

    return 0;
}