//
// Created by Junghun Lee on 12/26/23.
//

#include <stdio.h>

int main(void) {
    char a;
    char b;

    printf("Enter two characters.\n");
    scanf("%c%c", &a, &b);
    printf("Characters just read are %c and %c.\n", a, b);
    return 0;
}