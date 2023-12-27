//
// Created by Junghun Lee on 12/27/23.
//

#include <stdio.h>

int main(void) {
    int a;
    char b;
    float c;
    double d;

    printf("Storage size for int data type:%d \n", sizeof(a)); // sizeof()는 함수가 아닌 연산자이다.
    printf("Storage size for char data type:%d \n", sizeof(b));
    printf("Storage size for float data type:%d \n", sizeof(c));
    printf("Storage size for double data type:%d \n", sizeof(d));

    return 0;
}