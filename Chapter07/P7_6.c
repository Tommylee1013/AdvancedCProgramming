//
// Practive 7-6
// Created by Junghun Lee on 1/2/24.
//

// preprocess
#include <stdio.h>
#define ROW 3
#define COL 4

// global variable
int y[ROW][COL];

// function declaration
void allocateArray(int (*_arr)[COL]);
void printArray(const int (*_arr)[COL]);

// main
int main(void) {

    allocateArray(y);
    printArray(y);

    return 0;
}

// function definition
void allocateArray(int (* _arr)[COL]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            _arr[i][j] = (i + 1) + j * (COL - 1);
        }
    }
} // allocateArray

void printArray(const int (* _arr)[COL]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%d ", _arr[i][j]);
        }
        printf("\n");
    }
} // printArray