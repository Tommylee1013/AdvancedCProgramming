//
// Homework 11-2
// Created by Junghun Lee on 1/9/24.
//
// preprocess
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

// function declaration
int insertString(char * str1, char * str2, int idx);

// main
int main(void) {
    int state = 0;
    char originalString[SIZE] = "Necessity is the Mother of Invention.";
    char insert[SIZE];
    int idx;

    printf("This program inserts a string to a specific position you want.\n\n");
    printf("Original string : %s\n", originalString);
    printf("Enter a string to insert : ");
    fgets(insert, sizeof(insert), stdin);
    for (int i = 0; i < strlen(insert); i++) {
        if (insert[i] == '\n') insert[i] = '\0';
    }
    printf("Where to do you want to insert? : ");
    scanf("%d", & idx);

    state = insertString(originalString, insert, idx);
    if (state == 0) {
        printf("Error is occured!\n");
        return 1;
    }
    printf("Result : %s\n", originalString);

    return 0;
} // main

// function definition
int insertString(char * str1, char * str2, int idx) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (idx > len1 || idx < 0) {
        printf("Invalid index.\n");
        return 0;
    }
    if (len1 + len2 >= SIZE) {
        printf("Invalid index.\n");
        return 0;
    }

    for (int i = len1; i >= idx; i--) {
        str1[i + len2] = str1[i]; // 뒤쪽으로 옮긴다
    }

    for (int i = 0; i < len2; i++) {
        str1[idx + i] = str2[i]; // 빈 공간에 입력한 문자열을 넣는다
    }
    return 1;
}