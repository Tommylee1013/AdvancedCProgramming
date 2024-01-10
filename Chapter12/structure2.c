//
// Created by Junghun Lee on 1/10/24.
//
#include <stdio.h>

typedef struct {
    int     year;
    int     month;
    int     day;
}BIRTHDAY;

int main(void) {
    BIRTHDAY Kim = {2000, 12, 11};
    BIRTHDAY Park = {1970, 3, 7};

    printf("Kim's birthday : %d-%d-%d\n", Kim.year, Kim.month, Kim.day);
    printf("Park's birthday : %d-%d-%d\n", Park.year, Park.month, Park.day);

    Park = Kim;

    printf("==== result of assignment ====\n");
    printf("Kim's birthday : %d-%d-%d\n", Kim.year, Kim.month, Kim.day);
    printf("Park's birthday : %d-%d-%d\n", Park.year, Park.month, Park.day);

    return 0;
}