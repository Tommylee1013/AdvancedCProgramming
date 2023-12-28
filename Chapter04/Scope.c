//
// Created by Junghun Lee on 12/28/23.
//
#include <stdio.h>

//global variables

int a = 10, b = 11, c = 12;

//main
int main(void) {
    int a = 1, b = 2;
    printf("%d %d %d\n", a, b, c); // a = 1, b = 2, c = 12
    {
        int b = 4; // b = 4
        float c = 5.0f; // c = 5.0f
        printf("%d %d %f\n", a, b, c); // a = 1, b = 4, c = 5.0f
        a = b; // a는 nested block 밖에 있는 변수를 사용, 따라서 main 함수부의 a = 4로 변함
        {
            int c; // declaration
            c = b; // c = 4
            printf("%d %d %d\n", a, b, c); // a = 4, b = 4, c = 4
        }
        printf("%d %d %f\n", a, b, c); // a = 4, b = 4, c = 5.0f
    }
    printf("%d %d %d\n", a, b, c); // a = 4, b = 2, c = 12
    return 0;
}