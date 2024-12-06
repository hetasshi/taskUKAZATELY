#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int a = 10;
    int b = 20;

    int* pa = &a;
    int* pb = &b;

    std::cout << "До обмена:" << std::endl;
    std::cout << "a = " << *pa << std::endl;
    std::cout << "b = " << *pb << std::endl;

    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;

    std::cout << "После обмена:" << std::endl;
    std::cout << "a = " << *pa << std::endl;
    std::cout << "b = " << *pb << std::endl;

}
