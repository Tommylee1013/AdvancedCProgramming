//
// Practice 7-3
// Created by Junghun Lee on 1/2/24.
//

// preprocess
#include <stdio.h>

// function declaration
int getString(char *);
void reverseString(char *, int);

// main
int main(void) {
    int len;
    static char string[50]; // string, size = 50bytes

    len = getString((char *) & string);
    reverseString((char *) & string, len);

    return 0;
}

//function definition
int getString(char * _string) {
    int i = 0;
    char _char;

    printf("Input : ");
    while (1) {
        scanf("%c", & _char);
        if (_char == '\n') {
            break; // if the \n is entered, then the input is finished.
        }
        _string[i] = _char;
        i += 1;
    }
    return i;
} // getString

void reverseString(char * _string, int length) {
    char temp;
    for (int i = 0; i < length / 2; i++) {
        temp = _string[i];
        _string[i] = _string[length - i - 1];
        _string[length - i - 1] = temp;
    } // swap characters
    printf("Result : ");
    for (int i = 0; i < length; i++) {
        printf("%c", _string[i]);
    }
    printf("\n");
} // reverseString