//
// Created by Junghun Lee on 12/30/23.
//
#include <stdio.h>

//Function Declaration
void multiplicationTable(void);

int main(void) {
    multiplicationTable();
    return 0;
} // main

//function definition
void multiplicationTable(void){
    for (int i = 2; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d * %d = %2d\t", i, j, j * i);
        }
        printf("\n");
    }
}