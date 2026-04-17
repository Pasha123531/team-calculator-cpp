#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    // Паша
    double Add(double a, double b);
    double Subtract(double a, double b);

    // Дем'ян
    double Multiply(double a, double b);
    double Divide(double a, double b);

    // Влад
    double Power(double base, double exponent);
    double Percentage(double total, double percent);
};

#endif
