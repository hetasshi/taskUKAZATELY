#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int num1, num2;
    char operation;

    std::cout << "Введите первое число: ";
    std::cin >> num1;

    std::cout << "Введите второе число: ";
    std::cin >> num2;

    int* p1 = &num1;
    int* p2 = &num2;


    std::cout << "Введите операцию (+, -, *, /): ";
    std::cin >> operation;

    switch (operation) {
    case '+':
        std::cout << *p2 + *p1 << std::endl;
        break;
    case '-':
        std::cout << *p1 - *p2 << std::endl;
        break;
    case '*':
        std::cout << *p1 * *p2 << std::endl;
        break;
    case '/':
        if (*p2 != 0) {
            std::cout << static_cast<double>(*p1) / *p2 << std::endl;
        }
        else
        {
            std::cout <<"na nol delit nelyza!" << std::endl;
        }
        break;
    default:
        std::cout << "Ошибка: неизвестная операция!" << std::endl;
    }

}

