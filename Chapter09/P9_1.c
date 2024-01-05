//
// Practice 9-1
// Created by Junghun Lee on 1/5/24.
//
// preprocess
#include <stdio.h>
#define MAX_SIZE 10

// main
int main(void) {
    int arr[MAX_SIZE];
    int * ptr = arr;

    for (int i = 1; i <= MAX_SIZE; i++) {
        ptr[i-1] = i;
    }

    printf("Array forward :  ");
    for (int i = 1; i <= MAX_SIZE; i++) {
        printf(" %2d", ptr[i-1]);
    }

    printf("\nArray backward:  ");
    for (int i = MAX_SIZE; i > 0; i--) {
        printf(" %2d", ptr[i-1]);
    }

    return 0;
} // main