//
// Created by Junghun Lee on 1/5/24.
//
#include <stdio.h>

int main(void) {
    char a[3] = {'a','b','c'};

    printf("%c\n", *(a + 1)); // 배열에 포인터 연산이 가능하다
    // a ++; -> 배열의 이름은 상수, 상수는 연산이 불가능하기 때문에 오류가 출력된다

    char * ptr = a;

    ptr ++; // pointer로 바꿔 주면 전위, 후위연산 가능하다
    printf("%c\n", *(ptr));
    return 0;
}