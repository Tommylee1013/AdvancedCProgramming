//
// Created by Junghun Lee on 12/26/23.
//
#include <stdio.h>

int main(void) {
    int year, month, day;

    printf("\nPlease enter the date : ");
    scanf("%d-%d-%d", &year, &month, &day);
    printf("\t%d 년 %d 월 %d 일\n\n", year, month, day);
    printf("This program prints \n\n\t\"DATE\"\n\n");

    return 0; // exit code
}