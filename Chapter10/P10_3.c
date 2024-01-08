//
// Practice 10-3
// Created by Junghun Lee on 1/8/24.
//
// preprocess
#include <stdio.h>
#include <stdlib.h>

// main
int main(void) {
    FILE * inFp;
    char _char = '\0';
    char prechar = '\0';
    int state;

    int numVoca = 0;

    inFp = fopen("input.txt", "r");
    if (inFp == NULL) {
        printf("input file open error !\n");
        return 1;
    }

    while (1) {
        state = fscanf(inFp, "%c", & _char);
        if (state == EOF) break;
        if (_char == '\n' || _char == '\t' || _char == ' '){
            numVoca ++;
            if (prechar == '\n' || prechar == '\t' || prechar == ' ' || prechar == '\0') {
                numVoca --;
            }
        }
        prechar = _char;
    }

    printf("Number of words : %d", numVoca);

    state = fclose(inFp); // file close
    if (state != 0) {
        printf("file close error!\n");
        return 1;
    }

    return 0;
} // main