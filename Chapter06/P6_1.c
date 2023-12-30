//
// Print Number Backward (Program 6-14)
// Created by Junghun Lee on 12/30/23.
//
#include <stdio.h>

int main(void) {
    //Local declaration
    long num;
    int digit;

    //Statement
    printf("Enter a number and I'll print it backward: ");
    scanf("%ld", & num);

    while (num > 0) {
        digit = (int)num % 10;
        printf("%d", digit);
        num = num / 10;
    } // while

    printf("\nHave a good day.\n");
    return 0;
}
