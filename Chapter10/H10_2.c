//
// Homework 10-2
// Created by Junghun Lee on 1/8/24.
//
// preprocess
#include <stdio.h>
#include <stdlib.h>

// function declaration
int ** readTable(int * row, int * col);
int rowMinimum(int * rowPtr, int col);
int rowMaximum(int * rowPtr, int col);
float rowAverage(int * rowPtr, int col);

// main
int main(void) {
    int row_num, col_num;

    int ** matrix;
    matrix = readTable(& row_num, & col_num);
    if (matrix == NULL) return 1;

    printf("=== The Statistics for table===\n");
    printf(" Row    Min     Max     Average\n");
    for (int i = 0; i < row_num; i++) {
        printf(" %3d %6d %7d %11.2f\n",
               i, rowMinimum(matrix[i], col_num),
               rowMaximum(matrix[i], col_num),
               rowAverage(matrix[i], col_num)
               ); // function call
    }
    printf("\n");

    for (int i = 0; i < row_num; i++) {
        free(matrix[i]);
    }
    free(matrix); // memory cleaning

    return 0;
} // main

// function definition
int ** readTable(int * row, int * col) {
    FILE * inFp;
    int ** matrix;
    int state;

    inFp = fopen("in.txt", "r");
    if (inFp == NULL) {
        printf("file open error!\n");
        exit(1);
    }

    fscanf(inFp, "%d %d", row, col);

    matrix = (int **) malloc(* row * sizeof(int *)); // 2D matrix memory allocation
    for (int i = 0; i < * row; i++) {
        matrix[i] = (int *) malloc(* col * sizeof(int));
        for (int j = 0; j < * col; j ++) {
            fscanf(inFp, "%d", & matrix[i][j]); // file input
        }
    } // matrix memory allocation

    state = fclose(inFp);
    if (state != 0) {
        printf("file close error!\n");
        exit(1);
    }

    return matrix;
} // readTable

int rowMinimum(int * rowPtr, int col) {
    int min_num = rowPtr[0];

    for (int i = 0; i < col; i++) {
        if (min_num > rowPtr[i]) min_num = rowPtr[i];
    }
    return min_num;
} // rowMinimum

int rowMaximum(int * rowPtr, int col) {
    int max_num = rowPtr[0];

    for (int i = 0; i < col; i++) {
        if (max_num < rowPtr[i]) max_num = rowPtr[i];
    }
    return max_num;
} // rowMaximum

float rowAverage(int * rowPtr, int col) {
    float sum = 0.0f;

    for (int i = 0; i < col; i++) {
        sum += (float)rowPtr[i];
    }

    return sum / (float)col;
} // rowAverage