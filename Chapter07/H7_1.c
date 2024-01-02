//
// Homework 7-1
// Created by Junghun Lee on 1/2/24.
//

// preprocess
#include <stdio.h>
#define N 7 // N is considered as random variable

// global variable
int arr[N][N]; // N * N square matrix

// function declaration
void setTriangularMatrix(int (* arr)[N]);
void drawTriangularMatrix(int (* arr)[N]);

// main
int main(void) {
    setTriangularMatrix(arr);
    drawTriangularMatrix(arr);
    return 0;
}

// function definition
/*
 =================== setTriangularMatrix ===================
 <params>
 Int (* array) _arr[N] : an array about N * N square matrix

 <returns>
 Void

 set a matrix
============================================================
*/
void setTriangularMatrix(int (* _arr)[N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j > i)
                _arr[i][j] = -1;
            else if (j == i)
                _arr[i][j] = 0;
            else
                _arr[i][j] = 1;
        }
    }
}

/*
 ================== drawTriangularMatrix ===================
 <params>
 Int (* array) _arr[N] : an array about N * N square matrix

 <returns>
 Void

 A function that fills the left-to-right diagonal region of
 the square matrix with zero, the upper-right triangle with
 -1 and the lower-left triangle with 1
============================================================
*/
void drawTriangularMatrix(int (* _arr)[N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf(" %2d", _arr[i][j]);
        printf("\n");
    }
}