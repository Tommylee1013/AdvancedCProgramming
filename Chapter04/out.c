//
// Created by Junghun Lee on 12/28/23.
//
#include <stdio.h>

void out() {
    extern int g, sg;
    printf("\t\t\t%d\n", ++g);
    // printf("%d\n", ++sg);
}