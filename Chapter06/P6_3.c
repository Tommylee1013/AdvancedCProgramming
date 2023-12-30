//
// Program 6-10 Print Right Triangle Using Nested for
// Created by Junghun Lee on 12/30/23.
//
#include <stdio.h>

int main(void) {
    //Local Declaration
    int limit;

    //Statements
    printf("\nPlease enter a number between 1 and 9: ");
    scanf("%d", & limit);

    for (int lineCtrl = 1;
         lineCtrl <= limit;
         lineCtrl++)
    {
        for (int numCtrl = 1;
             numCtrl <= lineCtrl;
             numCtrl++)
        {
            printf("%ld", numCtrl);
        }

        printf("\n");
    } // for lineCtrl

    return 0;
} // main