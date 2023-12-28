//
// Created by Junghun Lee on 12/28/23.
//

#include <stdio.h>

//function declaration
void getData(int* a, int* b);
int add(int a, int b);
void printRes(int a, int b, int sum);

//main
int main(void) {
    int a, b;
    int sum;

    getData(&a, &b);
    sum = add(a, b);
    printRes(a, b, sum);

    return 0;
}

void getData(int* a, int* b) {
    printf("Please enter two integer numbers: ");
    scanf("%d %d", a, b);

    printf("**getData : a = %d; b = %d\n", *a, *b); // address references
    return ;
}

int add(int a, int b) {
    int result;
    result = a + b;
    printf("**add : %d + %d = %d\n", a, b, result);
    return result;
}

void printRes(int a, int b, int sum) {
    printf("**main : %4d + %4d = %4d\n", a, b, sum);
    return ;
}