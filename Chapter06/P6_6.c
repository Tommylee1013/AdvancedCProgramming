//
// Created by Junghun Lee on 12/30/23.
//
#include <stdio.h>
#include <math.h>

int main(void) {
    int N;
    float data;
    float M2 = 0, E2 = 0; // initialize
    float std_dev;
    int i;

    printf("데이터의 개수를 입력하시오: ");
    scanf("%d", & N); // input N

    printf("데이터를 %d개 입력하시오: ", N);
    for (i = 0; i < N; i++) {
        scanf("%f", & data); // input data
        M2 += data * data; // accumulate data square
        E2 += data; // accumulate data
    }

    M2 = M2 / (float)N; // average of sum
    E2 = (E2 / (float)N) * (E2 / (float)N); // average of data
    std_dev = sqrt(M2 - E2);
    printf("표준편차 = %f\n", std_dev);

    return 0;
}