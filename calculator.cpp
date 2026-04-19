#include <iostream>
#include "calculator.h"


double Calculator::Add(double a, double b) {
    return a + b;
}

double Calculator::Subtract(double a, double b) {
    return a - b;
}


double Calculator::Multiply(double a, double b) {
    return a * b;
}
double Calculator::Divide(double a, double b) {
    if (b == 0) return 0; // Базова перевірка
    return a / b;
}

int main() {
    Calculator calc;
    std::cout << "Командний калькулятор запущено!" << std::endl;
  
    return 0;
    
}
