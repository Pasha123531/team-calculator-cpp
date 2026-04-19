#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;
    std::cout << "Тест додавання: 5 + 3 = " << calc.Add(5, 3) << std::endl;
    std::cout << "Тест віднімання: 10 - 4 = " << calc.Subtract(10, 4) << std::endl;
    std::cout << "Тест множення: 6 * 7 = " << calc.Multiply(6, 7) << std::endl;
    std::cout << "Тест ділення: 20 / 4 = " << calc.Divide(20, 4) << std::endl;
    return 0;
}