//
// Created by Junghun Lee on 12/28/23.
//
#include <stdio.h>

//function declaration
int factorial(int n);

//main
int main(void) {
    int a;
    printf("Input a number : ");
    scanf("%d", &a);

    printf("%d! = %d\n", a, factorial(a));
    return 0;
}

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n-1);
}