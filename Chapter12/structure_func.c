//
// Created by Junghun Lee on 1/11/24.
//
// preprocess
#include <stdio.h>

// structure
typedef struct {
    int id;
    int score;
    char name[10];
} STD;

// function declaration
STD inputSTD(void);
void showSTD(STD a1);
void changeScore(STD * s);

// main
int main(void) {
    STD s1 = inputSTD();
    showSTD(s1);
    changeScore(& s1);
    showSTD(s1);
    return 0;
}

// function definition
STD inputSTD(void) {
    STD temp;
    printf("Input STD\n");
    scanf("%d %d %s", & temp.id, & temp.score, temp.name);
    return temp;
}

void showSTD(STD a1) {
    printf("id: %d, score: %d, name: %s\n", a1.id, a1.score, a1.name);
}

void changeScore(STD * s) {
    (* s).score += 5;
}