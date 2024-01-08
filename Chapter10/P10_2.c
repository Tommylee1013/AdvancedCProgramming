//
// Practice 10-2
// Created by Junghun Lee on 1/8/24.
//
// preprocess
#include <stdio.h>
#include <stdlib.h>

// main
int main(void) {
    FILE * inFp;
    char _char;
    char prechar;

    int numChar = 0, numLines = 0;
    int state;

    inFp = fopen("input.txt", "r");
    if (inFp == NULL) {
        printf("input file open error !\n");
        return 1;
    }

    while (1) {
        prechar = _char;
        state = fscanf(inFp, "%c", & _char);
        if (state == EOF) {
            if (prechar == '\n') {
                numLines--;
                numChar--;
            }
            break;
        }
        if (_char == '\n') numLines++;
        numChar ++;
    }

    printf("Number of characters : %d\n", numChar - numLines); // EOF 고려
    printf("Number of lines : %d\n", numLines + 1);

    state = fclose(inFp); // file close
    if (state != 0) {
        printf("file close error!\n");
        return 1;
    }

    return 0;
}