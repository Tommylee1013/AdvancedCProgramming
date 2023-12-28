//
// Created by Junghun Lee on 12/28/23.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int range;
    int random_number;

    srand(time(NULL)); // random seed dependency : current time
    range = 7;

    random_number = rand() % range + 1; // generating number [1,2,3,4,5,6,7]
    printf("\nThe random number is %d\n", random_number * 11 + 56);

    return 0;
}