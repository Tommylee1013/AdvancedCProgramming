//
// Created by Junghun Lee on 12/28/23.
//

#include <stdio.h>

//function declaration
int square(int m);
int sq_add(int f, int s);

//main part
int main(void) {
    int first, second, sum;
    printf("Enter two integers : "); scanf("%d %d", & first, & second);
    sum = sq_add(first, second);
    printf("The result is %d.\n", sum);

    return 0;
}

//function part
int square(int m) {
    return m * m;
}

int sq_add(int f, int s) {
    int total;
    total = square(f) + square(s);
    return total;
}