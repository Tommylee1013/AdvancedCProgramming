//
// Created by Junghun Lee on 12/29/23.
//
#include <stdio.h>
#include <math.h>

// global constant

const double bound = 1.0e-8; // 유지보수 용이

// function declaration
void getNumbers(double *, double *, double *);
int isQuadraticEquation(double, double);
void solveQuadraticEquation(double, double, double);

// main
int main(void) {
    double _num1, _num2, _num3;
    int _flag;

    getNumbers(& _num1, & _num2, & _num3);
    _flag = isQuadraticEquation(_num1, _num2);

    if (_flag == 0) { // 상수인 경우
        printf("No root exists.\n");
        return 0;
    }

    if (_flag == 1) { // 1차식인 경우
        printf("root = %.4f.\n", -_num3 / _num2);
        return 0;
    }

    if (_flag == 2) { // 2차식인 경우
        solveQuadraticEquation(_num1, _num2, _num3);
    }
    return 0;
}

// function definition
void getNumbers(
        double * _num1,
        double * _num2,
        double * _num3
        ) {
    printf("Enter a, b, c : ");
    scanf("%lf %lf %lf", _num1, _num2, _num3); // get numbers

    return ;
}

int isQuadraticEquation(
        double _num1,
        double _num2
        ) {

    if (_num1 == 0 && _num2 == 0) {
        return 0; // constant value
    }

    if (_num1 == 0) {
        return 1; // linear equation
    }

    return 2; // quadratic equation
}

void solveQuadraticEquation(
        double _num1,
        double _num2,
        double _num3
        ) {

    double D = (_num2 * _num2) - (4.0 * _num1 * _num3);

    if (fabs(D) <= bound) { // Check Multiple Root
        printf("root = %.4f.\n", (-_num2) / (2.0 * _num1));
    } else if (D > 0) { // if fabs(D) <= bound is false and D > 0
        D = sqrt(D);
        printf("root1 = %.4f and root2 = %.4f.\n",
               (-_num2 + D) / (2.0 * _num1),
               (-_num2 - D) / (2.0 * _num1));
    } else { // D < 0
        printf("No root exists.\n");
    }
    return ;
}