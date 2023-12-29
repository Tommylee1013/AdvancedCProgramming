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
    if (_score > 100 || _score < 0) {
        printf("점수 입력이 잘못되었습니다.\n");
        return 0;
    }
    _grade = calculGrade(_score);
    printGrade(_grade);

    return 0;
}

//function definition
void inputScore(int * _score) {
    printf("점수 입력 : ");
    scanf("%d", _score);
    return ;
}

char calculGrade(int _score) {
    // using switch statement
    int _check = _score / 10;
    char grade;
    switch (_check) {
        case 10 :
        case 9 :
            grade = 'A';
            break;
        case 8 :
            grade = 'B';
            break;
        case 7 :
            grade = 'C';
            break;
        case 6 :
            grade = 'D';
            break;
        default :
            grade = 'F';
    }
    return grade;
}

void printGrade(char _grade){
    // print grade
    printf("학점은 %c입니다\n", _grade);
    return ;
}