//
// Homework 6-3
// Created by Junghun Lee on 12/30/23.
//

// preprocess
#include <stdio.h>

// global variable declaration
int ITER_NUM = 0;

// function declaration
void getInteger(int *);
int sumIntegers(void);

// main
int main(void) {
    int _sum;
    printf("0보다 큰 정수 5개를 입력하시오.\n");
    _sum = sumIntegers();
    printf("총합: %d\n", _sum);
    return 0;
}

// function definition

/*
======================== getInteger ========================
 <params>
 Int * _num : address references

 <returns>
 Void

 get integer which is bigger than or equal to 1.
============================================================
*/
void getInteger(int * _num) {
    printf("0보다 큰 수 입력 (%d번째) : ", ITER_NUM + 1);
    scanf("%d", _num);
} // getInteger

/*
======================= sumIntegers ========================
 <params>
 Void

 <returns>
 Int result : sum of 5 integers

 receive 5 integers.
 write statement by overlapping the while statements without
 using conditional statements.
 when a number less than 1 is entered, it is not recognized
 as sn input and a re-entry is requested.
============================================================
*/

int sumIntegers(void) {
    int _num, result = 0;

    while (ITER_NUM < 5) {
        _num = 0; // initialization
        while (_num <= 0) {
            // if 0 or negative integers were entered,
            // the program ask re-entry the new integer
            // which is more than 1.
            getInteger(& _num);
        }
        result += _num;
        ITER_NUM++;
    }
    return result;
} // sumIntegers