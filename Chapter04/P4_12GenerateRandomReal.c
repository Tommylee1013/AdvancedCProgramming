//
// Created by Junghun Lee on 12/28/23.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    float x;

    srand(time(NULL));

    x = (float)rand() / RAND_MAX;
    printf("%f", x);
    x = (float)rand() / RAND_MAX;
    printf(" %f", x);
    x = (float)rand() / RAND_MAX;
    printf(" %f\n", x);

    return 0;
}