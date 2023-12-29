//
// Created by Junghun Lee on 12/29/23.
//
#include <stdio.h>

//function declaration
void inputGrade(int*);
char calculGrade(int);
void printGrade(char);

//main()
int main(void) {
    int num;
    char grade;

    inputGrade(& num);
    grade = calculGrade(num);
    printGrade(grade);

    return 0;
}

//function definition
void inputGrade(int* input) {
    printf("Enter the score(0-100):");
    scanf("%d", input);
    return ;
}

char calculGrade(int _num){
    char grade;
    if (_num >= 91) {
        grade = 'A';
    } else if (_num >= 81) {
        grade = 'B';
    } else if (_num >= 71) {
        grade = 'C';
    } else if (_num >= 61) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    return grade;
}

void printGrade(char _grade){
    printf("The grade is %c", _grade);
    return ;
}