//
// Homework 6-2
// Created by Junghun Lee on 12/30/23.
//

// preprocess
#include <stdio.h>

// main
int main(void) {
    long _num;
    int digit;

    while (1) {
        printf("자연수를 입력하시오\n");
        scanf("%ld", & _num);

        if (_num <= 0) break; // 0이나 음수가 입력되면 종료

        for (int i = 0; ; i++) {

            digit = (int)_num % 10;
            printf("%d", digit); // 역순 출력
            _num /= 10;

            if (_num == 0) break; // _num이 모든 process를 마치고 0이 되면 종료
        }
        printf("\n");
    }
    return 0;
} // main