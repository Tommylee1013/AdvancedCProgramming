//
// Created by Junghun Lee on 1/2/24.
//
#include <stdio.h>

// main
int main(void) {
    int i, temp;
    int first[5] = {0}, second[5];
    // second 초기화 안함

    for (i = 0; i < 5; i++) {
        scanf("%d", & first[i]);
    }

    for (i = 0; i < 5; i++) {
        second[i] = first[i];
    } // 배열을 통째로 저장할 수 없다. 원소 단위로 값을 복사한다

    for (i = 0; i < 2; i++) {
        temp = first[i];
        first[i] = first[4 - i];
        first[4 - i] = temp;
    }

    printf("First  Second\n");

    for (i = 0; i < 5; i++) {
        printf("%5d  %6d\n", first[i], second[i]);
    }

    return 0;
}