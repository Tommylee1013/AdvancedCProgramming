//
// Practice 12-5
// Created by Junghun Lee on 1/10/24.
//
// preprocess
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// structure
typedef struct {
    char * name;
    char * mail;
    int mobile;
} PROFESSOR;

typedef struct {
    char * name;
    char * major;
    int ID;
    float cgpa;
} STUDENT;

typedef struct {
    char type;
    union {
        PROFESSOR  prof;
        STUDENT stu;
    } u;
}PERSON;

// function declaration
void printPerson(PERSON * person);

// main
int main(void) {
    PERSON person1, person2;
    person1.type = 'p';
    person2.type = 's';

    person1.u.prof.name = (char *)malloc(sizeof(char) * 6);
    strcpy(person1.u.prof.name, "james");
    person1.u.prof.mail = (char *)malloc(sizeof(char) * 18);
    strcpy(person1.u.prof.mail, "james@hanmail.net");
    person1.u.prof.mobile = 1097063456;

    person2.u.stu.name = (char *)malloc(sizeof(char) * 6);
    strcpy(person2.u.prof.name, "david");
    person2.u.stu.major = (char *) malloc(sizeof(char) * 17);
    strcpy(person2.u.stu.major, "computer science");
    person2.u.stu.ID = 20010123;
    person2.u.stu.cgpa = 3.10f;

    printPerson(& person1);
    printPerson(& person2);

    return 0;
} // main

// function definition
void printPerson(PERSON * person) {
    printf("-------------------------\n");
    if ((* person).type == 'p') {
        printf("name: %s\n", (* person).u.prof.name);
        printf("mail: %s\n", (* person).u.prof.mail);
        printf("mobile: %d\n", (* person).u.prof.mobile);
    } else if ((* person).type == 's') {
        printf("name: %s\n", (* person).u.stu.name);
        printf("major: %s\n", (* person).u.stu.major);
        printf("id: %d\n", (* person).u.stu.ID);
        printf("cgpa: %.2f\n", (* person).u.stu.cgpa);
    } else {
        printf("type error!\n");
        exit(1);
    }
} // printPerson