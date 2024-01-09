//
// Practice 11-2
// Created by Junghun Lee on 1/9/24.
//
#include <stdio.h>
#define SIZE 20

// main
int main(void) {
    char str[SIZE];
    static int sum;

    printf("숫자가 포함된 문자열을 입력하시오 : ");
    fgets(str, sizeof(str), stdin);

    for (
        int i = 0;
        i < sizeof(str) / sizeof(str[0]);
        i++) {
        if ((int) str[i] >= 48 && (int) str[i] <= 57)
            sum += (int)(str[i] - '0');
    }

    printf("숫자들의 합은 %d\n", sum);
    return 0;
}