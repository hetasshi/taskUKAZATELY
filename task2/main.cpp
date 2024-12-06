#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int number;

    int* ptr_number = &number;

    std::cout << "введите целое число: ";
    std::cin >> *ptr_number;

    if (*ptr_number > 0) {
        std::cout << "знак числа положительный" << std::endl;
    }
    else if (*ptr_number < 0) {
        std::cout << "знак числа отрицательный" << std::endl;
    }
    else {
        std::cout << "вы ввели ноль" << std::endl;
    }

   
}

