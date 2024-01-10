//
// Created by Junghun Lee on 1/10/24.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int entry_year;
    char residence[6];
    char * name; // pointer variable
} EMPLOYEE;

int main(void) {
    EMPLOYEE a = {2021, "Seoul", NULL};
    EMPLOYEE b;

    a.name = (char *)malloc(sizeof(char) * 5);
    strcpy(a.name, "Lee"); // 동적 배열에 string copy

    b = a; // copy, 동적 배열까지 전부 복사된다
    // strcpy(b.name, "Park");

    printf("%d %s %s\n", a.entry_year, a.residence, a.name);
    printf("%d %s %s\n", b.entry_year, b.residence, b.name);

    return 0;
}