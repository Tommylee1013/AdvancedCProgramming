//
// Created by Junghun Lee on 1/2/24.
//
#include <stdio.h>

int main(void) {
    static int a[4][3];
    int i, j;

    for (i = 0; i < 4; i++) for (j = 0; j < 3; j++) a[i][j] = i * j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("a[%d][%d] = %d ", i, j, a[i][j]);
        }
        printf("\n");
    }
    return 0;
}