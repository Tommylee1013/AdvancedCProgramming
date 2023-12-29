//
// Created by Junghun Lee on 12/29/23.
//
#include <stdio.h>
#include <math.h>

int main(void) {
    float a, b, c;
    double D, root1, root2;
    printf("Enter a, b, c : ");
    scanf("%f %f %f", &a, &b, &c);

    D = (b * b) - (4 * a * c);
    D = sqrt(D);
    root1 = (-b + D) / (2 * a);
    root2 = (-b - D) / (2 * a);
    printf("root1 = %.4f and root2 = %.4f.\n", root1, root2);

    return 0;
}