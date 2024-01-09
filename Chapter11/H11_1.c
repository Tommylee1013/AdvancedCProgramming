//
// Homework 11-1
// Created by Junghun Lee on 1/9/24.
//

// preprocess
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20

// main
int main(void) {
    char str1[SIZE];
    char str2[SIZE];
    char * name1, * name2;
    char * age1, * age2;

    printf("첫번째 사람의 정보 : ");
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1) - 1] = '\0';

    printf("두번쨰 사람의 정보 : ");
    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2) - 1] = '\0';

    name1 = strtok(str1, " ");
    age1 = strtok(NULL, " ");

    name2 = strtok(str2, " ");
    age2 = strtok(NULL, " ");

    if (strlen(age1) > 3 || strlen(age2) > 3) {
        printf("나이는 세 자리 이하여야 합니다.\n");
        return 1;
    } // 예외처리

    if (strcmp(name1, name2) == 0) printf("이름이 같습니다.\n");
    else printf("이름이 다릅니다.\n");

    if (atoi(age1) == atoi(age2)) printf("나이가 같습니다.\n");
    else printf("나이가 다릅니다.\n");

    return 0;
} // main