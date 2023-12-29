//
// Created by Junghun Lee on 12/29/23.
//

#include <stdio.h>

//function declaration
void inputScore(int*);
char calculGrade(int); // using switch
void printGrade(char);

//main
int main(void) {
    int _score;
    char _grade;

    inputScore(& _score);
    _grade = calculGrade(_score);
    printGrade(_grade);

    return 0;
}

//function definition
void inputScore(int * _score) {
    printf("점수 입력 : ");
    scanf("%d", _score);

    if (_score > 100 || _score < 0) {
        printf("점수 입력이 잘못되었습니다.");
    }

    return None;
}

char calculGrade(int _score) {
    // using switch statement
}