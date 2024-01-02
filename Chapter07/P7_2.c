//
// Practice 7-2
// Created by Junghun Lee on 1/2/24.
//

// preprocess
#include <stdio.h>

// function declaration
void getElements(int *);
int calculTimes(const int *);
void printTimes(const int *, int);

// main
int main(void) {
    static int time[3];
    int sum;

    getElements((int *) & time);
    sum = calculTimes((int *) & time);
    printTimes((int *) & time, sum);

    return 0;
}

// function definition
void getElements(int * _arr) {
    printf("시간을 입력하시오 : ");
    scanf("%d", & _arr[0]);

    printf("분을 입력하시오 : ");
    scanf("%d", & _arr[1]);

    printf("초를 입력하시오 : ");
    scanf("%d", & _arr[2]);
}

int calculTimes(const int * _arr) {
    int sum;
    sum = _arr[0] * 60 * 60 + _arr[1] * 60 + _arr[2];
    return sum;
} // calculTimes

void printTimes(const int * _arr, int _sum) {
    printf("%d시간 %d분 %d초는 %d초 입니다.\n", _arr[0], _arr[1], _arr[2], _sum);
} // printTimes