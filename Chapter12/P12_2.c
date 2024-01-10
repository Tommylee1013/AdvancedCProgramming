//
// Practice 12-2
// Created by Junghun Lee on 1/10/24.
//
// preprocess
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// structure
typedef struct {
    int hr;
    int min;
    int sec;
} CLOCK;

// function declaration
void increment(CLOCK * clock);
void show(CLOCK * clock);

// main
int main(void) {
    static CLOCK clock;
    char _char[15];

    printf("Current time(ex:10:15:27) : ");
    fgets(_char, sizeof(_char), stdin);

    clock.hr = atoi(strtok(_char, ":"));
    clock.min = atoi(strtok(NULL, ":"));
    clock.sec = atoi(strtok(NULL, ":"));

    for (int i = 0; i < 10; i++) {
        increment(& clock);
        show(& clock);
    }

    return 0;
}// main

// function definition
void increment(CLOCK * clock) {
    (* clock).sec += 1;
    if ((* clock).sec == 60) {
        (* clock).min ++;
        (* clock).sec -= 60;
    }

    if ((* clock).min == 60) {
        (* clock).hr ++;
        (* clock).min -= 60;
    }

    if ((* clock).hr == 13) {
        (* clock).hr -= 12;
    }
}

// function definition
void show(CLOCK * clock) {
    printf("%0.2d:%0.2d:%0.2d\n", (* clock).hr, (* clock).min, (* clock).sec);
} // show
