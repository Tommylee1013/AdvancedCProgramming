//
// Created by Junghun Lee on 12/27/23.
//
#include <stdio.h>
int main(void) {
    printf("Characters: %c %c \n", 'a', 65); // 65가 문자형으로 출력된다
    printf("Decimals: %d %ld\n", 1977, 650000L);
    printf("Preceding with blanks: %10d \n", 1977);
    printf("Preceding with zeros: %010d \n", 1977);
    printf("Some differenct radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
    printf("floats: %4.2f %+.0e %E \n", 3.1416, 31.416, 31.416);
    printf("Width trick: %*d \n", 5, 10);
    printf("%s \n", "A string"); // 내부적으로는 array로 처리

    return 0;
}