#include <iostream>
#include "calculator.h"
#include <windows.h>

int main() {
    // Налаштування кодування для правильного відображення української мови
    SetConsoleOutputCP(CP_UTF8);

    Calculator calc;
    int choice;
    double num1, num2;

    std::cout << "======================================" << std::endl;
    std::cout << "   Командний калькулятор запущено!    " << std::endl;
    std::cout << "======================================" << std::endl;

    do {
        std::cout << "\nОберіть операцію:" << std::endl;
        std::cout << "1. Додавання" << std::endl;
        std::cout << "2. Віднімання" << std::endl;
        std::cout << "3. Множення" << std::endl;
        std::cout << "4. Ділення" << std::endl;
        std::cout << "5. Піднесення до степеня" << std::endl;
        std::cout << "6. Знаходження відсотка" << std::endl;
        std::cout << "0. Вихід" << std::endl;
        std::cout << "======================================" << std::endl;
        std::cout << "Ваш вибір: ";
        std::cin >> choice;

        // Якщо користувач вибрав вихід
        if (choice == 0) {
            std::cout << "Дякуємо за використання калькулятора! Завершення роботи..." << std::endl;
            break;
        }

        // Перевірка на правильність вводу меню
        if (choice >= 1 && choice <= 6) {
            
            // Спеціальні підказки для різних операцій
            if (choice == 5) {
                std::cout << "Введіть число (базу): ";
                std::cin >> num1;
                std::cout << "Введіть степінь: ";
                std::cin >> num2;
            } else if (choice == 6) {
                std::cout << "Введіть загальне число: ";
                std::cin >> num1;
                std::cout << "Введіть відсоток (наприклад, 10): ";
                std::cin >> num2;
            } else {
                std::cout << "Введіть перше число: ";
                std::cin >> num1;
                std::cout << "Введіть друге число: ";
                std::cin >> num2;
            }

            std::cout << "--------------------------------------" << std::endl;
            std::cout << "Результат: ";
            
            // Виконання обраної операції
            switch (choice) {
                case 1: std::cout << calc.Add(num1, num2); break;
                case 2: std::cout << calc.Subtract(num1, num2); break;
                case 3: std::cout << calc.Multiply(num1, num2); break;
                case 4: 
                    if (num2 == 0) std::cout << "Помилка: ділення на нуль!";
                    else std::cout << calc.Divide(num1, num2); 
                    break;
                case 5: std::cout << calc.Power(num1, num2); break;
                case 6: std::cout << calc.Percentage(num1, num2); break;
            }
            std::cout << "\n--------------------------------------" << std::endl;
            
        } else {
            std::cout << "Невірний вибір! Будь ласка, оберіть цифру від 0 до 6." << std::endl;
        }

    } while (choice != 0);

    return 0;
}