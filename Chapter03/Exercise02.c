//
// Created by Junghun Lee on 12/27/23.
//

#include <stdio.h>

int main(void) {
    int x;
    int y;

    x = 10;
    y = 5;

    printf("x: %d   |   y: %2d ", x, y);
    printf("   |   x *= y + 2: %2d ", x *= y + 2);
    printf("   |  x is now: %2d\n", x);

    x = 10;

    printf("x: %d   |   y: %2d ", x, y);
    printf("   |   x /= y + 1: %2d ", x /= y + 1);
    printf("   |  x is now: %2d\n", x);

    x = 10;

    printf("x: %d   |   y: %2d ", x, y);
    printf("   |   x /= y - 3: %2d ", x %= y - 3);
    printf("   |  x is now: %2d\n", x);

    return 0;
}