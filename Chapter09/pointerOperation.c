//
// 포인터와 배열의 포인터 연산 예제
// Created by Junghun Lee on 1/5/24.
//
// preprocess
#include <stdio.h>
int main(void) {
    int i, * ptr, arr[] = {5, 10, 15, 20, 25};
    printf("arr[0] = %d\n", arr[0]);
    printf("* arr = %d\n", *arr); // 같은 값을 출력한다

    ptr = arr; // pointer initialization
    for (i = 0; i < 5; i++) {
        printf("%d\t", * (ptr + i));
    } printf("\n");

    ptr = arr;
    for (i = 0; i < 5; i++) {
        printf("%d\t", * ptr ++); // 후위 연산
    } printf("\n");

    ptr = arr;
    for (i = 0; i < 5; i++) {
        printf("%d\t", (* ptr) ++); // 후위 연산
    } printf("\n");

    return 0;
}