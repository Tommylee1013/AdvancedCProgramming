//
// Created by Junghun Lee on 12/27/23.
//
#include <stdio.h>

int main(void) {
    char temp;

    printf("알파벳 소문자를 입력하시오 : "); scanf("%c", &temp);
    printf("소문자 %c의 대문자는 %c입니다.\n", temp, temp-32);
    return 0;
}