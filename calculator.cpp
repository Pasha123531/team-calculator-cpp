#include <iostream>

class Calculator {
public:
    double Add(double a, double b);
    double Subtract(double a, double b);
    double Multiply(double a, double b);
    double Divide(double a, double b);
    double Power(double base, double exponent);
    double Percentage(double total, double percent);
};

int main() {
    std::cout << "Головна програма калькулятора" << std::endl;
    return 0;
}
