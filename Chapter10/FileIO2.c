//
// Created by Junghun Lee on 1/8/24.
//

#include <stdio.h>
int main(void) {
    FILE * inFp, * outFp;
    char name[20];
    int age;
    double height;
    int state;

    inFp = fopen("input.txt", "r");
    if (inFp == NULL) {
        printf("input file open error !\n");
        return 1;
    }

    outFp = fopen("output.txt", "w");
    if (outFp == NULL) {
        printf("output file open error !\n");
        return 1;
    }

    while (1) {
        state = fscanf(inFp, "%s %d %lf", name, & age, & height);
        if (state == EOF) break;
        fprintf(outFp, "%.1lf %d %s\n", height, age, name);
    }

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