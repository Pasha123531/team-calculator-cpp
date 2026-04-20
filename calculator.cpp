#include <iostream>
#include <cmath>
#include "calculator.h"

//Sum of two numbers
double Calculator::Add(double a, double b) {
    return a + b;
}

//Difference of two numbers
double Calculator::Subtract(double a, double b) {
    return a - b;
}

//Power of a number
double Calculator::Power(double base, double exponent) {
    return std::pow(base, exponent);
}

double Calculator::Multiply(double a, double b) {
    return a * b;
}
double Calculator::Divide(double a, double b) {
    if (b == 0) return 0; // Базова перевірка
    return a / b;
}

//Percentage of a number
double Calculator::Percentage(double total, double percent) {
    return (total * percent) / 100.0;
}
