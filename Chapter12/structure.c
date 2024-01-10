//
// Created by Junghun Lee on 1/10/24.
//
#include <stdio.h>

int main(void) {
    typedef struct date_of_birth {
        int     year;
        int     month;
        int     day;
    } bir ;

    bir birthday;

    birthday.year = 1999;
    birthday.month = 10;
    birthday.day = 13;

    printf("%d - %d - %d\n", birthday.year, birthday.month, birthday.day);
    return 0;
}