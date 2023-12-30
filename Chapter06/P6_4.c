//
// Program 6-15, Convert Binary to Decimal
// Created by Junghun Lee on 12/30/23.
//
#include <stdio.h>
#include <stdbool.h>

// Function Declaration
long long getNum(void);
long long binaryToDecimal(long long binary);
long long powerTwo(long long num);
long long firstDigit(long long num);
bool validateBinary(long long binary);

int main(void) {
    // Local Declarations
    long long binary;
    long long decimal;

    // Statements
    binary = getNum();
    decimal = binaryToDecimal(binary);
    printf("The binary number was: %lld", binary);
    printf("\nThe decimal number is: %lld", decimal);
    return 0;
} // main

long long getNum(void) {
    bool isValid;
    long long binary;

    do {
        printf("Enter a binary number (zeros and ones): ");
        scanf("%lld", & binary);
        isValid = validateBinary(binary);
        if (!isValid) {
            printf("\a\aNot binary. Zeros/ones only.\n\n");
        }
    } while (!isValid); // do - while loop, post test

    return binary;
} // getNum

long long binaryToDecimal(long long binary) {
    // Local Declarations
    long long decimal;

    // Statements
    decimal = 0;
    for (int i = 0; binary != 0; i++) {
        decimal += firstDigit(binary) * powerTwo(i);
        binary /= 10;
    } // for i
    return decimal;
} // binaryToDecimal

bool validateBinary(long long binary) {
    while (binary != 0) {
        if (!(binary % 10 == 0 || binary % 10 == 1)) return false;
        binary /= 10;
    } // while loop
    return true;
} // validateBinary

long long powerTwo(long long num) {
    long long power = 1;

    for (int i = 1; i <= num; i++) {
        power *= 2;
    }
    return power;
} // powerTwo

long long firstDigit(long long num) {
    return (num % 10);
} // firstDigit