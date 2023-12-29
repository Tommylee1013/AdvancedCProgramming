//
// Created by Junghun Lee on 12/29/23.
//
#include <stdio.h>

//function declaration
void inputEquations(int*, char*, int*);
void calculEquations(int, char, int);

//main
int main(void){
    int _num1, _num2;
    char _char;

    // iter1
    inputEquations(& _num1, & _char, & _num2);
    calculEquations(_num1, _char, _num2);

    // iter2
    inputEquations(& _num1, & _char, & _num2);
    calculEquations(_num1, _char, _num2);

    // iter3
    inputEquations(& _num1, & _char, & _num2);
    calculEquations(_num1, _char, _num2);

    // iter4
    inputEquations(& _num1, & _char, & _num2);
    calculEquations(_num1, _char, _num2);

    // iter5
    inputEquations(& _num1, & _char, & _num2);
    calculEquations(_num1, _char, _num2);

    return 0;
}

//function definition
void inputEquations(int* _num1, char* _char, int* _num2) {
    printf("사칙 연산식을 입력하세요[예)2 * 2] : ");
    scanf("%d %c %d", _num1, _char, _num2);
    return ;
}

void calculEquations(int _num1, char _char, int _num2) {
    switch (_char) {
        case '+' :
            printf("%.2f %c %.2f = %.2f\n",
                   (double)_num1, _char, (double)_num2, (double)_num1 + (double)_num2);
            break;
        case '-' :
            printf("%.2f %c %.2f = %.2f\n",
                   (double)_num1, _char, (double)_num2, (double)_num1 - (double)_num2);
            break;
        case '*' :
            printf("%.2f %c %.2f = %.2f\n",
                   (double)_num1, _char, (double)_num2, (double)_num1 * (double)_num2);
            break;
        case '/' :
            if (_num2 == 0) {
                printf("Zero Division Error\n");
                break;
            }
            printf("%.2f %c %.2f = %.2f\n",
                   (double)_num1, _char, (double)_num2, (double)_num1 / (double)_num2);
            break;
        default :
            printf("올바른 연산식을 입력하세요\n");
    }
    return ;
}