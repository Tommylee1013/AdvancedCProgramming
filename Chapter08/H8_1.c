//
// Homework 8-1
// Created by Junghun Lee on 1/4/24.
//
// preprocess
#include <stdio.h>

// function declaration
void getIntegers(int *, int *);
void func(int, int, int *, int *, int *, int *);

// main
int main(void) {
    // local variable declaration
    static int sum, sub, div, mod;
    int * _sum = & sum, * _sub = & sub, * _div = & div, * _mod = & mod; // pointers
    int num1, num2; // two integers

    getIntegers(& num1, & num2);
    func(num1, num2, _sum, _sub, _div, _mod);

    printf("%d + %d = %d\n", num1, num2, * _sum);
    printf("%d - %d = %d\n", num1, num2, * _sub);
    if (div == 0 && mod == -1) {
        printf("Zero Division Error! \n");
        printf("Zero Modulo Error! \n");
        return 0;
    }
    printf("%d / %d = %d\n", num1, num2, * _div);
    printf("%d %% %d = %d\n", num1, num2, * _mod);

    return 0;
} // main

// function definition

/*
======================== getIntegers =======================
 <params>
 Int * _num1 : Integer 1
 Int * _num2 : Integer 2

 <returns>
 Void

 get 2 integers to calculate sum, sub, div, mod operations
============================================================
*/
void getIntegers(int * _num1, int * _num2) {
    printf("Enter two integers : ");
    scanf("%d", _num1); scanf("%d", _num2);
} // getIntegers

/*
=========================== func ===========================
 <params>
 Int _num1 : Integer 1
 Int _num2 : Integer 2
 Int * _sum : summation of integers
 Int * _sub : subtraction of integers
 Int * _div : division of integers
 Int * _mod : modulo of integers

 <returns>
 Void

 do 4 operations using 2 integers entered from getIntegers
============================================================
*/
void func(
        int _num1,
        int _num2,
        int * _sum,
        int * _sub,
        int * _div,
        int * _mod
        ) {
    * _sum = _num1 + _num2;
    * _sub = _num1 - _num2;
    if (_num2 == 0) {
        * _div = 0; // zero division error
        * _mod = -1; // zero modulo error
    } else {
        * _div = _num1 / _num2;
        * _mod = _num1 % _num2;
    }
} // func