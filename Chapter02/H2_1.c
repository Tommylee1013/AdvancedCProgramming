//
// Created by Junghun Lee on 12/26/23.
//

#include <stdio.h>

int main(void) {
    int a = 10000;
    float b = 2.54f;
    char* c = "programming language";

    printf("|a:%d | b:%8.2f | c:%-25s|\n", a, b, c);
    printf("|a:%7d | b:%.6f | c:%s|\n", a, b, c);
    printf("|a:%-7d | b:%.4f | c:%30s|\n", a, b, c);

    return 0;
}