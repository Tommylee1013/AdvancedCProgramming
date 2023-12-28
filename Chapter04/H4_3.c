//
// Created by Junghun Lee on 12/28/23.
//
#include <stdio.h>

//function declaration
void celsius(void);
void fahrenheit(void);
void getCelsius(float*);
void getFahrenheit(float*);
float celsiusToFahrenheit(float);
float fahrenheitToCelsius(float);
void printCelsius(float);
void printFahrenheit(float);

//main
int main(void) {
    celsius(); // call celsius
    fahrenheit(); // call fahrenheit
    return 0;
}

//function definition
void celsius(void){
    float celsius, fahrenheit;
    getCelsius(& celsius);
    fahrenheit = celsiusToFahrenheit(celsius);
    printFahrenheit(fahrenheit);
}

void fahrenheit(void) {
    float celsius, fahrenheit;
    getFahrenheit(& fahrenheit);
    celsius = fahrenheitToCelsius(fahrenheit);
    printCelsius(celsius);
}

void getCelsius(float* value) {
    printf("\n섭씨 온도를 입력하시오 : ");
    scanf("%f", value); // 매개변수가 이미 주소를 가리키는 포인터 타입
}

void getFahrenheit(float* value) {
    printf("\n화씨 온도를 입력하시오 : ");
    scanf("%f", value); // 매개변수가 이미 주소를 가리키는 포인터 타입
}

float celsiusToFahrenheit(float a) {
    float result;
    result = a * (9.0f/5.0f) + 32.0f;
    return result;
}

float fahrenheitToCelsius(float a) {
    float result;
    result = (a - 32.0f) * (5.0f / 9.0f);
    return result;
}

void printFahrenheit(float a) {
    printf("화씨 온도는 %.2f 입니다\n", a);
}

void printCelsius(float a){
    printf("섭씨 온도는 %.2f 입니다\n", a);
}