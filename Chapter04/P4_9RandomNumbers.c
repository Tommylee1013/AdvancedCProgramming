//
// Created by Junghun Lee on 12/28/23.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//main
int main (void) {
    srand(time(NULL)); // random seed dependency : current time

    printf("%d\n", rand());
    printf("%d\n", rand());
    printf("%d\n", rand());

    return 0;
}
