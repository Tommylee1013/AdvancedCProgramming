//
// Homework 6-1
// Created by Junghun Lee on 12/30/23.
//

// preprocess
#include <stdio.h>

// function declaration
void getIterationNumber(int *);
void drawStarTree(int);

// main
int main(void) {
    int iter_num;
    getIterationNumber(& iter_num); // get Iteration number
    drawStarTree(iter_num); // draw Star Tree based on iter_num
    return 0;
}

// function definition

/*
==================== getIterationNumber ====================
 <params>
 Int * num : address reference type

 <returns>
 Void

 get how many times to iterate using scanf().
============================================================
*/
void getIterationNumber(int * _num) {
    printf("Enter number of rows : ");
    scanf("%d", _num);
} // getIterationNumber

/*
======================= drawStarTree =======================
 <params>
 Int _num : a number of Tree depth.

 <returns>
 Void

 draw a star tree based on the entered value.
============================================================
*/
void drawStarTree(int _num) {
    for (int i = 1; i <= _num; i++) {
        for (int j = 0; j < _num - i; j++) printf(" ");
        for (int k = 0; k < i; k++) printf("*");
        for (int l = 1; l < i; l++) printf("*");
        printf("\n");
    }
} // drawStarTree