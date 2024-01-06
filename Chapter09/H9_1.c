//
// Homework 9-1
// Created by Junghun Lee on 1/7/24.
//
// preprocess
#include <stdio.h>

// function declaration
void get_delete_char(char *);
void delete_char(char *, int, char);
void print_string(const char *);

// main
int main(void) {
    char Arr[] = {
            'G','O','O','D','M','O','R','N','I','N','G','\0'
    };
    char deleteChar;
    int len = (sizeof(Arr) / sizeof(char));

    printf("삭제 전 : ");
    print_string(Arr);
    printf("\n");

    get_delete_char(& deleteChar);
    delete_char(Arr, len, deleteChar);

    printf("삭제 후 :");
    print_string(Arr);
    printf("\n");

    return 0;
} // main

// function definition
/*
====================== get_delete_char =====================
 <params>
 char * _char : a character to want to delete

 <returns>
 Void

 get one character that the user want to delete
============================================================
*/
void get_delete_char(char * _char) {
    printf("삭제할 문자 : ");
    scanf(" %c", _char);
} // get_delete_char

/*
======================== delete_char =======================
 <params>
 char * arr : an array which have full characters
 int size : a size of an array
 char delete : a character for the user to want to delete

 <returns>
 Void

 Delete any of the elements in the array, such as the input
 characters. If deletion occurs in the middle of an array,
 move the positions of the subsequent elements forward
 one by one and insert the character '\0' in the last digit
============================================================
*/
void delete_char(char * arr, int size, char delete){
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == delete) {
            arr[i] = '\0';
        }
    }
    for (int j = 0; j < size; j++) {
        if (arr[j] != '\0') {
            arr[count++] = arr[j];
        }
    }
    while (count < size) {
        arr[count++] = '\0';
    }
} // delete_char

/*
======================= print_string =======================
 <params>
 const char * _arr : an array to print

 <returns>
 Void

 print the string from an array
============================================================
*/
void print_string(const char * _arr) {
    int i = 0;
    while (1) {
        printf("%c", _arr[i]);
        i++;
        if (_arr[i] == '\0') break;
    }
} // print_string