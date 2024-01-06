//
// Created by Junghun Lee on 1/6/24.
//
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int * a;
    a = (int *)malloc(sizeof(int));
    if (a == NULL) {
        puts("malloc failed");
        exit(1);
    }
    * a = 5;
    printf("a : %d\n", *a);
    free(a);
    return 0;
}