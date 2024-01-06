//
// Created by Junghun Lee on 1/6/24.
//
#include <stdio.h>
#include <stdlib.h>

void function(int i);

int main(void) {
    int n = 0;
    printf("size : ");
    scanf("%d", & n);
    function(n);
    return 0;
}

void function(int i) {
    int * array = (int *)malloc(sizeof(int) * i);
    int j;
    if (array == NULL) {
        printf("malloc failed.\n");
        exit(1);
    }

    for (j = 0; j < i; j++) {
        array[j] = j * j;
    }

    for (j = 0; j < i; j++) {
        printf("array[%d] : %d \n", j, array[j]);
    }
    free(array);
}