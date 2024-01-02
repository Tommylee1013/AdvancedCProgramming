//
// Homework 7-3
// Created by Junghun Lee on 1/2/24.
//
// preprocess
#include <stdio.h>
#define ROW 5
#define COL 6

// global array declaration
int table[ROW][COL];
float rowAve[ROW];

// function declaration
void getMatrix(int (* _table)[COL]);
void rowAverage(int (* _table)[COL], float * _rowAve);
void printMatrices(int (* _table)[COL], float * _rowAve);

// main
int main(void) {
    getMatrix(table);
    rowAverage(table, rowAve);
    printMatrices(table, rowAve);

    return 0;
} // main

// function definition

/*
========================= getMatrix ========================
 <params>
 Int (* array) _table[COL] : an array about ROW * COL matrix

 <returns>
 Void

 get ROW * COL matrix
============================================================
*/
void getMatrix(int (* _table)[COL]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            _table[i][j] = i * 3 + j + 1;
        }
    }
} // getMatrix

/*
======================== rowAverage ========================
 <params>
 Int (* array) _table[COL] : ROW * COL table
 Int (* array) _rowAve : an array whose elements is average
 of a row

 <returns>
 Void

 Calculate an average of each row on matrix
============================================================
*/
void rowAverage(int (* _table)[COL], float * _rowAve){
    for (int i = 0; i < ROW; i++) {
        _rowAve[i] = 0.0f; // initialization
        for (int j = 0; j < COL; j++) {
            _rowAve[i] += (float)_table[i][j];
        }
        _rowAve[i] /= (float)COL;
    }
} // rowAverage

/*
====================== printMatrices =======================
 <params>
 Int (* array) _table[COL] : ROW * COL table
 Int (* array) _rowAve : an array whose elements is average
 of a row

 <returns>
 Void

 print result of Homework 7-3
============================================================
*/
void printMatrices(int (* _table)[COL], float * _rowAve) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%3d" , _table[i][j]);
        }
        printf("   |%6.2f\n", _rowAve[i]);
    }
} // printMatrices