//
// Created by Junghun Lee on 12/29/23.
//
#include <stdio.h>
#include <stdbool.h>

//main
int main(void) {
    bool a = true;
    bool b = true;
    bool c = false;

    printf("\t\t%d AND \t\t %d :\t%d\n", a, b, a && b);
    printf("\t\t%d AND \t\t %d :\t%d\n", a, c, a && c);
    printf("\t\t%d AND \t\t %d :\t%d\n", c, b, c && b);
    printf("\t\t%d OR \t\t %d : \t%d\n", a, c, a || c);
    printf("\t\t%d OR \t\t %d : \t%d\n", c, b, c || b);
    printf("\t\t%d OR \t\t %d : \t%d\n", c, c ,c || c);
    printf("NOT\t\t%d AND NOT\t %d : \t%d\n", b, c , (!b) && (!c));
    printf("NOT\t\t%d AND \t\t %d : \t%d\n", b, c , (!b) && c);
    printf("\t\t%d AND NOT\t %d : \t%d\n", a, c , a && (!c));

    return 0;
}