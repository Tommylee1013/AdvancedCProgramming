//
// Practice 12-3
// Created by Junghun Lee on 1/11/24.
//
// preprocess
#include <stdio.h>

typedef struct {
    int numerator;
    int denominator;
} FRACTION;

// function declaration
void getFr(FRACTION * fr);
void multFr(FRACTION * fr1, FRACTION * fr2, FRACTION * result);
void printFr(const FRACTION * fr1, const FRACTION * fr2, const FRACTION * result);

// main
int main(void){
    FRACTION fr1, fr2, res;

    getFr(& fr1);
    getFr(& fr2);
    multFr(& fr1, & fr2, & res);
    printFr(& fr1, & fr2, & res);

    return 0;
}

// function definition
void getFr(FRACTION * fr) {
    printf("Write a fraction in the form of x/y : ");
    scanf("%d/%d", & (* fr).numerator, & fr->denominator);
}

void multFr(FRACTION * fr1, FRACTION * fr2, FRACTION * result) {
    result->numerator = fr1->numerator * fr2->numerator;
    result->denominator = fr1->denominator * fr2->denominator;
}

void printFr(
        const FRACTION * fr1,
        const FRACTION * fr2,
        const FRACTION * result
        ) {
    printf("\nThe result of %d/%d * %d/%d is %d/%d\n",
           fr1->numerator, fr1->denominator,
           fr2->numerator, fr2->numerator,
           result->numerator, result->denominator);
}