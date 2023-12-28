//
// Created by Junghun Lee on 12/28/23.
//
#include <stdio.h>

int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
double div(int x, int y);

int main(void) {
    int first, second;

    printf("First num : "); scanf("%d", & first);
    printf("Second num : "); scanf("%d", & second);

    printf("Add : %d\n", add(first, second));
    printf("Sub : %d\n", sub(first, second));
    printf("Mul : %d\n", mul(first, second));
    printf("Div : %f\n", div(first, second));

    return 0;
}

int add(int x, int y) {
    return x + y;
}

int sub(int x, int y) {
    return x - y;
}

int mul(int x, int y) {
    return x * y;
}

double div(int x, int y) {
    double result;
    result = (double)x / (double)y;
    return result;
}