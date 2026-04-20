#include <iostream>
#include "calculator.h"
#include <windows.h>

int main() {
    // Set console output code page to UTF-8 for proper display of Ukrainian characters
    SetConsoleOutputCP(CP_UTF8);
    
    //Initializing the calculator object
    Calculator calc;
    std::cout << "Тест додавання: 5 + 3 = " << calc.Add(5, 3) << std::endl;
    std::cout << "Тест віднімання: 10 - 4 = " << calc.Subtract(10, 4) << std::endl;
    std::cout << "Тест множення: 6 * 7 = " << calc.Multiply(6, 7) << std::endl;
    std::cout << "Тест ділення: 20 / 4 = " << calc.Divide(20, 4) << std::endl;
    std::cout << "Командний калькулятор запущено!" << std::endl;

    //Testing the implemented functions
    std::cout << "5 + 3 = " << calc.Add(5, 3) << std::endl;
    std::cout << "2^3 = " << calc.Power(2, 3) << std::endl;
    std::cout << "10% of 500 = " << calc.Percentage(500, 10) << std::endl;

    return 0;
}