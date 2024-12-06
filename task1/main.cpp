#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int var1 { 7 };
    int var2 { 9 };

    std::cout << "\tКакое значение больше?" << std::endl;
    std::cout << "Введите значение var1 = " << var1 << endl;
    /*std::cin >> var1;*/
    std::cout << "Введите значение var2 = " << var2 << endl;
    /*std::cin >> var2;*/

    int* pvar1 { &var1 };
    int* pvar2 { &var2 };
    
    if (*pvar1 > *pvar2)
    {    
        cout << *pvar1 << " > " << *pvar2 << endl;
    }
    if (*pvar1 < *pvar2)
    {  
        cout << *pvar1 << " < " << *pvar2 << endl;
    }
    if (*pvar1 == *pvar2)
    {
        cout << *pvar1 << " == " << *pvar2 << endl;
    }
   
}

