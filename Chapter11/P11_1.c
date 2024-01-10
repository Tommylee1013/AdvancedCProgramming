//
// Practice 11-1
// Created by Junghun Lee on 1/10/24.
//
// preprocess
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int amount;
    FILE * spData;
    int state;

    spData = fopen("p11-03.txt", "r");
    if (spData == NULL) {
        printf("\aCloud not open input file.\n");
        exit(100);
    }

    while (fscanf(spData, " %*d%d%*[^\n]", & amount) != EOF)
        printf("Second integer: %4d\n", amount);

    printf("End of program\n");
    fclose(spData);

    return 0;
}