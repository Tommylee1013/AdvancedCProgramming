//
// Created by Junghun Lee on 12/29/23.
//
#include <stdio.h>
#include <math.h>

//function declaration
void getNumbers(double *, double *, double *);
int isValid(double, double, double); // return 1 or 0
void calculTriangle(double, double, double);

//main
int main(void) {
    double _num1, _num2, _num3;
    int _flag;

    getNumbers(& _num1, & _num2, & _num3);
    _flag = isValid(_num1, _num2, _num3);
    if (_flag == 0) {
        printf("입력이 잘못되었습니다.\n");
        return 0;
    }
    calculTriangle(_num1, _num2, _num3);

    return 0;
}

//function definition
void getNumbers(
        double * _num1,
        double * _num2,
        double * _num3
        ) {
    printf("삼각형의 세 변을 입력하시오.\n");
    scanf("%lf %lf %lf", _num1, _num2, _num3);

    return ;
}

int isValid(
        double _num1,
        double _num2,
        double _num3
        ){
    if (_num1 + _num2 <= _num3) {
        return 0;
    }
    if (_num1 + _num3 <= _num2) {
        return 0;
    }
    if (_num2 + _num3 <= _num1) {
        return 0;
    }
    return 1;
}

void calculTriangle(
        double _num1,
        double _num2,
        double _num3
        ){
    double area;
    double m;

    m = (_num1 + _num2 + _num3) / 2.0;
    area = sqrt(m * (m - _num1) * (m - _num2) * (m - _num3));

    printf("삼각형의 면적 : %f", area);
    return ;
}