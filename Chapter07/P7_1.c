//
// Practice 7-1
// Created by Junghun Lee on 1/2/24.
//

// preprocess
#include <stdio.h>

// function declaration
void getElements(int *);

// main
int main(void) {
    int arr[3] = {0, 1, 2};
    int i;
    int num;

    for (i = 0; i < 3; i++){
        getElements(& num);
        arr[i] += num;
    }

    printf("arr[0] = %d, arr[1] = %d, arr[2] = %d",
           arr[0], arr[1], arr[2]);
} // main

// function definition
void getElements(int * _num) {
    printf("number? ");
    scanf("%d", _num);
} // getElements