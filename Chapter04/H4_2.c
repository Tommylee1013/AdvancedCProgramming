//
// Created by Junghun Lee on 12/28/23.
//
#include <stdio.h>
#include <math.h>

//function declaration
double computeInterest(int amount, int n);

//main
int main(void) {
    int deposit;
    double result, tax;
    tax = 0.154;

    printf("예금 가입 금액을 입력하시오 : ");
    scanf("%d", & deposit);

    printf("3개월 후 이자\t: %16.2f\n", computeInterest(deposit, 3));
    printf("6개월 후 이자\t: %16.2f\n", computeInterest(deposit, 6));
    printf("1년 후 이자\t: %16.2f\n", computeInterest(deposit, 12));
    printf("==================================\n");

    result = (double)deposit + computeInterest(deposit, 12) * (1.0 - tax);

    printf("만기시 수령액\t: %16.2f\n", result);

    return 0;
}

double computeInterest(int amount, int n) {
    double interest_rate = 1.0027;
    double result = (double)amount * (pow(interest_rate, (double)n) - 1.0);
    return result;
}