//
// 포인터와 2차원 배열
// Created by Junghun Lee on 1/5/24.
//
#include <stdio.h>

int main(void) {
    int table[3][4];

    printf("%p\n", table);
    printf("%p\n", table[0]);
    printf("%p\n\n", & table[0][0]);

    printf("%p\n", table[1]); // table + 1
    printf("%p\n\n", & table[1][0]);

    printf("%p\n", table[2]);
    printf("%p\n\n", & table[2][0]);

    printf("sizeof(table) : %lu\n", sizeof(table));
    printf("sizeof(table[0]) : %lu\n", sizeof(table[0]));
    printf("sizeof(table[1]) : %lu\n", sizeof(table[1]));
    printf("sizeof(table[2]) : %lu\n", sizeof(table[2]));

    return 0;
}