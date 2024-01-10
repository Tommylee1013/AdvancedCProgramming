//
// Created by Junghun Lee on 1/10/24.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[26];
    double gradePoints;
} STUDENT;

int main(void) {
    STUDENT Park;
    STUDENT * pPark;

    pPark = & Park;
    Park.id = 20211234;
    Park.gradePoints = 3.3;
    strcpy(Park.name, "Gildong Park");

    printf("%s(%d): %.2lf\n", pPark -> name, (* pPark).id, pPark -> gradePoints);

    pPark = (STUDENT *)malloc(sizeof(STUDENT));
    pPark -> id = 20201234;
    (* pPark).gradePoints = 3.7;
    strcpy(pPark -> name, "Minseok Park");

    printf("%s(%d): %.2lf\n", pPark -> name, (* pPark).id, (* pPark).gradePoints);
    return 0;
}