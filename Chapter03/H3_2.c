//
// Created by Junghun Lee on 12/27/23.
//
#include <stdio.h>

int main(void) {

    int input;

    printf("변환할 값을 입력하시오(kg) : ");
    scanf("%d", & input);
    printf("============================\n");
    printf("%d kg = %.3f gr\n", input, (double)input / 0.00006479);
    printf("%d kg = %.3f once\n", input, (double)input / 0.02835);
    printf("%d kg = %.3f lb\n", input, (double)input / 0.45359);

    return 0;
}