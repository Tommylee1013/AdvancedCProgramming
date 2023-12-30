//
// Program 6-9 Compound Interest
// Created by Junghun Lee on 12/30/23.
//
#include <stdio.h>

int main(void) {
    double presVal;
    double futureVal;
    double rate;
    int years;
    int looper;

    // Statement
    printf("Enter value of investment:    ");
    scanf("%lf", & presVal);

    printf("Enter rate of return (nn.n):  ");
    scanf("%lf", & rate);

    printf("Enter number of years:        ");
    scanf("%d", & years);

    printf("\nYear    Value\n");
    printf("====  ========\n");

    for (futureVal = presVal, looper = 1;
        looper <= years;
        looper++) {
        futureVal = futureVal * (1 + rate / 100.0);
        printf("%3d%11.2lf\n", looper, futureVal);
    } // for loop

    return 0;
} // main