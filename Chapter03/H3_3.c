//
// Created by Junghun Lee on 12/27/23.
//

#include <stdio.h>

int main(void) {

    int input;

    printf("정수를 입력하시오 : ");
    scanf("%d", & input);

    printf("부호를 바꾸 정수 : %d\n" , ~input + 1);
}