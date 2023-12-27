//
// Created by Junghun Lee on 12/27/23.
//

#include <stdio.h>

int main(void) {
    int a = 17, b = 5;
    float x = 17.67, y = 5.1;

    printf("Integral calculations\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n\n", a, b, a % b);

    printf("Floating-point calculations\n");
    printf("%f + %f = %f\n", x, y, x + y);
    printf("%f - %f = %f\n", x, y, x - y);
    printf("%f * %f = %f\n", x, y, x * y);
    printf("%f / %f = %f\n", x, y, x / y);

    return 0;
}