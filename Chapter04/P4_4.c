//
// Created by Junghun Lee on 12/28/23.
//
#include <stdio.h>

int main (void) {
    int krw;
    double usd = 1278.70, euro = 1404.27, yen = 919.04;

    printf("input KRW : ");
    scanf("%d", &krw);
    printf("USD : %.2f\n", (double)krw / usd);
    printf("EUR : %.2f\n", (double)krw / euro);
    printf("JPY : %.2f\n", (double)krw / yen * 100);

    return 0;
}