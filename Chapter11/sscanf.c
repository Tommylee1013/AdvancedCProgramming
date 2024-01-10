//
// Created by Junghun Lee on 1/10/24.
//
#include <stdio.h>

int main(void) {
    char name[30];
    char stuNo[5];
    int score;
    char grade;
    char strOut[80];
    char strIn[80] = "Einstein, Albert; 1234 97 A";

    printf("String contains: \"%s\"\n", strIn);
    sscanf(strIn, "%29[^;]%*c%4s%d%*[^ABCDEF]%c", name, stuNo, & score, & grade);
    // name : %*c - 문자형 배열에 매칭
    // stuNo : %4s - 문자형 배열에 매칭, 길이는 정해져 있음
    // & score : %d - 정수형 매칭
    // & grade : %c 문자형 매칭

    printf("Reformatted data : \n");
    printf("Name :\t\t\"%s\"\n", name);
    printf("Student No:\t\"%s\"\n", stuNo);
    printf("Score :\t\t%d\n",score);
    printf("Grade :\t\t%c\n", grade);

    sprintf(strOut, "%s %s %d %c", name, stuNo, score, grade);
    printf("New string:\"%s\"\n", strOut);

    return 0;
}