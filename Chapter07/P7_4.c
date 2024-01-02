//
// Practice 7-4
// Created by Junghun Lee on 1/2/24.
//

// preprocess
#include <stdio.h>

// function declaration
void getElement(int * );
int isExist(const int *, int);

// global variables
int array[10] = {1, 3, 5, 7, 21, 22, 24, 25, 49, 51};

// main
int main(void) {
    int num;
    int flag;

    printf("In array : ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    getElement(& num);
    flag = isExist((int *) & array, num);
    if (flag == 0) {
        printf("Result : not exists\n");
    } else {
        printf("Result : exists\n");
    }
    return 0;
}

// function definition
void getElement(int * _num) {
    printf("Input : ");
    scanf("%d", _num);
} // getElement

int isExist(const int * _arr, int _num){
    int flag = 0;
    for (int i = 0; i < 10; i++) {
        if (_num == _arr[i]) {
            flag = 1; // linear search
        }
    }
    return flag;
}