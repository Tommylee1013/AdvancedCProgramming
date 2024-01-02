//
// Practice 7-5
// Created by Junghun Lee on 1/2/24.
//

// preprocess
#include <stdio.h>

// function declaration
void allocateArray(int arr[3][3]);
void printArray(const int arr[3][3]);

// global vriable
int x[3][3]; // only declaration

// main
int main(void) {
    allocateArray(x);
    printArray(x);

    return 0;
} // main

// function definition
void allocateArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = i * 3 + (j + 1);
        }
    }
} // allocateArray

void printArray(const int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
} // printArray