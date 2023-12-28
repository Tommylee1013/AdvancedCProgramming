//
// Created by Junghun Lee on 12/28/23.
//
#include <stdio.h>

//global variables
int g = 10;
static int sg = 20; // meaningless static

//function declaration
void in();
void out();

//main
int main() {
    auto int a = 100; // meaningless auto

    printf("%d %d %d\n", g, sg, a);
    in(); out();
    in(); out();
    in(); out();
    printf("%d %d %d\n", g, sg, a);

    return 0;
}

//function definition
void in() {
    auto int fa = 1; // meaningless auto
    static int fs; // static global variable declaration

    printf("\t%d %d %d %d\n", ++g, ++sg, ++fa, ++fs);
}