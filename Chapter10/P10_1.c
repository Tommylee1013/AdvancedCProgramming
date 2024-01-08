//
// Practice 10-1
// Created by Junghun Lee on 1/8/24.
//

// preprocess
#include <stdio.h>

int main(void) {
    FILE * inFp, * outFp;
    char name[20];
    int age;
    double height;
    int state;

    int sumAge = 0;
    double sumHeight = 0.0;

    inFp = fopen("studentIn.txt", "r");
    if (inFp == NULL) {
        printf("input file open error !\n");
        return 1;
    }

    outFp = fopen("StudentOut.txt", "w");
    if (outFp == NULL) {
        printf("output file open error !\n");
        return 1;
    }

    while (1) {
        state = fscanf(inFp, "%s %d %lf", name, & age, & height);
        if (state == EOF) break;
        sumAge += age;
        sumHeight += height;
        fprintf(outFp, "%.1lf %d %s\n", height, age, name);
    }
    fprintf(outFp,
            "Average height : %.1lf Average age: %d",
            sumHeight / 3,
            sumAge / 3
            );

    state = fclose(inFp);
    if (state != 0) {
        printf("file close error!\n");
        return 1;
    }
    state = fclose(outFp);
    if (state != 0) {
        printf("file close error!\n");
        return 1;
    }
    return 0;
}