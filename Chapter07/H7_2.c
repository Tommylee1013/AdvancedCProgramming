//
// Homework 7-2
// Created by Junghun Lee on 1/2/24.
//
// preprocess
#include <stdio.h>

// global array declaration
int x[3][3]; // from P7_5
int y[3][4]; // from P7_6
int arr[3][4] = {0}; // initialization

// function declaration
void getXMatrix(int (* arr)[3]);
void getYMatrix(int (* arr)[4]);
void doMatrixMultiplication(
        int (* arr1)[3],
        int (* arr2)[4],
        int (* arr3)[4]
        );
void printMatrices(
        const int (* arr1)[3],
        const int (* arr2)[4],
        const int (* arr3)[4]
        );

// main
int main(void) {
    getXMatrix(x);
    getYMatrix(y);

    doMatrixMultiplication(x, y, arr);

    printMatrices(x, y, arr);
    return 0;
} // main

// function definition
/*
======================== getXMatrix ========================
 <params>
 Int (* array) _arr[3] : an array about 3 * 3 matrix

 <returns>
 Void

 get 3 * 3 matrix X
============================================================
*/
void getXMatrix(int (* _arr)[3]){
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            _arr[i][j] = i * 3 + (j + 1);
        }
    }
} // getXMatrix

/*
======================== getYMatrix ========================
 <params>
 Int (* array) _arr[4] : an array about 3 * 4 matrix

 <returns>
 Void

 get 3 * 4 matrix Y
============================================================
*/
void getYMatrix(int (* _arr)[4]){
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            _arr[i][j] = (i + 1) + j * (4 - 1);
        }
    }
} // getYMatrix

/*
================== doMatrixMultiplication ==================
 <params>
 Int (* array) arr1[3] : matrix X
 Int (* array) arr2[4] : matrix Y
 Int (* array) arr3[4] : multiplicated matrix

 <returns>
 Void

 get multiplicated matrix
============================================================
*/
void doMatrixMultiplication(
        int (* arr1)[3],
        int (* arr2)[4],
        int (* arr3)[4]
        ) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 3; k++) {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
} // doMatrixMultiplication

/*
====================== printMatrices =======================
 <params>
 Int (* array) arr1[3] : matrix X
 Int (* array) arr2[4] : matrix Y
 Int (* array) arr3[4] : multiplicated matrix

 <returns>
 Void

 print result of Homework 7-2
============================================================
*/
void printMatrices(
        const int (* arr1)[3],
        const int (* arr2)[4],
        const int (* arr3)[4]
    ) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    } // matrix X

    printf("\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    } // matrix Y

    printf("\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%3d ", arr3[i][j]);
        }
        printf("\n");
    } // matrix Z
    printf("\n");
} // printMatrices