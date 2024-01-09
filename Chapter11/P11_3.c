//
// Practice 11-3
// Created by Junghun Lee on 1/9/24.
//
// preprocess
#include <stdio.h>
#include <string.h>
#define SIZE 20

// function declaration
int isSemicolon(char);

// main
int main(void) {
    // local variable
    char * result;
    char str[SIZE];
    static int idx;

    printf("Enter any algebraic expression : ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';

    result = strtok(str, " ");
    while (result != NULL) {
        for (int i = 0; i < strlen(result); i++) {
            if (isSemicolon(result[i]) == 1) {
                result[i] = '\0';
            }
        }
        printf("Token %d : %s\n", idx + 1, result);
        result = strtok(NULL, " ");
        idx++;
    }

    return 0;
}

int isSemicolon(char _arr) {
    if ((int)_arr == 59) {
        return 1;
    } else {
        return 0;
    }
} // isValid