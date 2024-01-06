//
// Practice 9-4
// Created by Junghun Lee on 1/6/24.
//

// preprocess
#include <stdio.h>
#include <stdlib.h>

// function declaration
void get_array(int *, int *);
int * reverse_array(int * original, int length);
void print_array(const int * , const int *);

// main
int main(void) {
    // local variable declaration
    int * integers = (int *)malloc(sizeof(int) * 20);
    static int length;

    if (integers == NULL) {
        printf("Memory allocation failed.\n"); // malloc failed
        exit(1);
    }

    // program statement
    get_array(integers, & length);
    int * reversed = reverse_array(integers, length); // length copied
    print_array(reversed, & length);

    free(integers);
    free(reversed); // cleaning

    return 0;
} // main

// function definition
void get_array(int (* arr), int * length) {
    int num;
    printf("Enter a sequence of positive integers.\n");

    while (1) {
        scanf("%d", & num);
        if (num <= 0) break;
        arr[* length] = num;
        (* length) ++;
        if (* length >= 20) break;
    }
} // get_array

int * reverse_array(int (* original), int length) {
    int * reversed = (int *) malloc(length * sizeof(int));

    if (reversed == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    for (int i = 0; i < length; i++) {
        reversed[i] = original[length - i - 1];
    }

    return reversed;
} // reverse_array

void print_array(const int (* arr), const int * length) {
    for (int i = 0; i < (* length); i++) {
        printf("%d ", arr[i]);
    }
} // print_array