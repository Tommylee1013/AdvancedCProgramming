//
// Homework 10-1
// Created by Junghun Lee on 1/8/24.
//
// preprocess
#include <stdio.h>
#include <stdlib.h>

// function declaration
int isUpper(const char *);
int isLower(const char *);
int isNumeric(const char *);
int isBlank(const char *);

// main
int main(void) {
    FILE * inFp, * outFp;
    char _char;
    int state;
    static int upper_num, lower_num, numeric_num, blank_num;

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
        state = fscanf(inFp, "%c", & _char);
        if (state == EOF) break;

        if (isUpper(& _char) == 1) upper_num ++;
        else if (isLower(& _char) == 1) lower_num ++;
        else if (isNumeric(& _char) == 1) numeric_num ++;
        else if (isBlank(& _char) == 1) blank_num ++;
    }

    fprintf(outFp, "Number of upper case letters : %d\n", upper_num);
    fprintf(outFp, "Number of lower case letters : %d\n", lower_num);
    fprintf(outFp, "Number of arabic characters : %d\n", numeric_num);
    fprintf(outFp, "Number of blanks : %d\n", blank_num);

    printf("Number of upper case letters : %d\n", upper_num);
    printf("Number of lower case letters : %d\n", lower_num);
    printf("Number of arabic characters : %d\n", numeric_num);
    printf("Number of blanks : %d\n", blank_num);

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
} // main

// function definition
int isUpper(const char * _char){
    if ((int) * _char >= 65 && (int) * _char <= 90) return 1; // 대문자 분류
    else return 0;
} // isUpper

int isLower(const char * _char){
    if ((int) * _char >= 97 && (int) * _char <= 122) return 1; // 소문자 분류
    else return 0;
} // isLower

int isNumeric(const char * _char){
    if ((int) * _char >= 48 && (int) * _char <= 57) return 1; // 숫자 분류
    else return 0;
} //isNumeric

int isBlank(const char * _char){
    if (* _char == ' ' || * _char == '\t') return 1; // 공백문자 분류
    else return 0;
} // isBlank