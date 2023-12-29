//
// Created by Junghun Lee on 12/29/23.
//
#include <stdio.h>

//function declaration
void inputNumbers(int*, int*, int*);
void MinMaxSort(int, int, int);

//main
int main(void) {
    int a, b, c;

    inputNumbers(&a, &b, &c);
    MinMaxSort(a, b, c);

    return 0;
}

//function definition
void inputNumbers(int* a, int* b, int* c) {
    printf("Enter the number 1 : ");
    scanf("%d", a);
    printf("Enter the number 2 : ");
    scanf("%d", b);
    printf("Enter the number 3 : ");
    scanf("%d", c);

    return ;
}

void MinMaxSort(int a, int b, int c) {
    int temp;
    // target : a - max, c - min
    if (a < b) { // if b is bigger than a
        temp = a; // switch two numbers
        a = b;
        b = temp;
    }
    if (a < c) { // if c is bigger than a
        temp = a; // switch two numbers
        a = c;
        c = temp;
    }
    if (b < c) { // if c is bigger than b
        temp = b; // switch two numbers
        b = c;
        c = temp;
    }
    printf("The max number is %d\n", a);
    printf("The min number is %d\n", c);

    return ;
}