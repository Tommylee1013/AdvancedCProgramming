//
// Created by Junghun Lee on 1/2/24.
//

#include <stdio.h>
int main(void) {
    static int num[5]; // 모두 0으로 초기화 된다
    int age[5]; // garbage value로 채워진다
    int i;

    for (i = 0; i < 5; i++) {
        printf("idx : %d, num : %d, age : %d\n", i, num[i], age[i]);
    }

    return 0;
}