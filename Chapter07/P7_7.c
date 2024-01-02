//
// Practice 7-7
// Program 8-4
// Created by Junghun Lee on 1/3/24.
//
// preprocess
#include <stdio.h>

// function declaration
double average(int (* ary));

// main
int main(void) {
    double ave;
    int base[5] = {3, 7, 2, 4, 5};

    ave = average(base);
    printf("Average is : %lf\n", ave);
    return 0;
}

// function definition
double average(int (* ary)){
    int sum = 0;
    for (int i = 0; i < 5; i++)
        sum += ary[i];

    return ((double)sum / 5.0);
}