//
// Homework9-2
// Created by Junghun Lee on 1/7/24.
//
// preprocess
#include <stdio.h>
#include <stdlib.h>
#define SEED 20180594 // student ID

// function declaration
void getRowCol(int *, int *);
int ** transpose(int ** matrix, int m, int n);
void printMatrix(int ** matrix, int m, int n);
void freeMatrix(int ** , const int *);

// main
int main(void) {
    int row, col;
    getRowCol(& row, & col);
    srand(SEED);

    int ** matrix;
    matrix = (int **) malloc(sizeof(int *) * row);
    for(int i = 0; i < row; i++){
        matrix[i] = (int *) malloc(sizeof(int) * col);
    } // memory allocation

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) matrix[i][j] = rand() % 100;
    } // set matrix elements

    int ** transposed = transpose(matrix, row, col);

    // print section
    printf("==================\n");
    printf("seed번호 %d로 생성된 Matrix\n", SEED);
    printMatrix(matrix, row, col);
    printf("==================\n");
    printf("Transpose된 Matrix\n");
    printMatrix(transposed, col, row);

    // memory cleaning
    freeMatrix(transposed, & col);
    freeMatrix(matrix, & row);

    return 0;
} // main

// function definition
/*
========================= getRowCol ========================
 <params>
 int * row : a number of rows of matrix
 int * col : a number of columns of matrix

 <returns>
 void

 a function that receives the number of columns and rows
 of a matrix
============================================================
*/
void getRowCol(int * row, int * col) {
    printf("Number of Rows : ");
    scanf("%d", row);
    printf("Number of Cols : ");
    scanf("%d", col);
} // getRowCol

/*
========================= transpose ========================
 <params>
 int ** matrix : a 2D array
 int m : number of rows
 int n : number of columns

 <returns>
 void

 Memory of the space required by the function is allocated
 and transposed, and a pointer with the result of the
 transposed matrix is returned
============================================================
*/
int ** transpose(int ** matrix, int m, int n) {
    int ** transposed = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        transposed[i] = (int *)malloc(m * sizeof(int));
        for (int j = 0; j < m; j++) {
            transposed[i][j] = matrix[j][i];
        }
    }
    return transposed;
} // transpose

/*
========================= transpose ========================
 <params>
 int ** matrix : a 2D array
 int m : number of rows
 int n : number of columns

 <returns>
 void

 Print the matrix
============================================================
*/
void printMatrix(int ** matrix, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) printf("%2d ", matrix[i][j]);
        printf("\n");
    }
} // printMatrix

/*
========================= freeMatrix =======================
 <params>
 int ** matrix : a 2D array to unmemory
 const int * m : number of rows

 <returns>
 void

 Using the free() function, release the array from memory
============================================================
*/
void freeMatrix(int ** matrix, const int * m) {
    for (int i = 0; i < * m; i++) {
        free(matrix[i]);
    } free(matrix);
} // freeMatrix