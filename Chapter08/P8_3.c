//
// Created by Junghun Lee on 1/4/24.
//
#include <stdio.h>

// function declaration
void getTimes(long *);
int secToHours(long time, int * hours, int * minutes, int * seconds);
void printTimes(long time, const int * hours, const int * minutes, const int * seconds, int flag);

// main
int main(void) {
    // local variable declaration
    long _time;
    int _hours, _minutes, _seconds;

    int * _phours = &_hours, * _pminutes = &_minutes, * _pseconds = &_seconds;
    int flag;

    getTimes(& _time);
    if (_time < 0) { // invalid time error
        printf("invalid time.\n");
        return 0;
    }
    flag = secToHours(_time,
                      _phours,
                      _pminutes,
                      _pseconds);

    printTimes(_time,
               _phours,
               _pminutes,
               _pseconds,
               flag);

    return 0;
}

// function definition
void getTimes(long * _time) {
    printf("Enter time in seconds : ");
    scanf("%ld", _time);
} // getTimes

int secToHours(long time, int * hours, int * minutes, int * seconds) {
    * hours = (int)time / 3600; // hours
    * minutes = (int)time / 60 % 60; // minutes
    * seconds = (int)time % 60; // seconds
    if (time > 60 * 60 * 24) {
        return 0; // if hours is more than 24, return 0
    } else return 1; // if hours is less than or equal to 24, return 1
} // secToHours

void printTimes(
        long time,
        const int * hours,
        const int * minutes,
        const int * seconds,
        int flag
        ) {
    printf("%ld seconds : ", time);
    if (flag == 0) {
        printf("more than one day... ");
    }
    printf("%d hours, %d minutes, %d seconds\n", * hours, * minutes, * seconds);
} // printTimes