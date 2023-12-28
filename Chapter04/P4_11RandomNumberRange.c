//
// Created by Junghun Lee on 12/28/23.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//main
int main (void) {
    int range;

    srand(time(NULL));
    range = (20 - 10) + 1; // 11

    printf("%d", rand() % range + 10);
    printf(" %d", rand() % range + 10);
    printf(" %d\n", rand() % range + 10);

    return 0;
}