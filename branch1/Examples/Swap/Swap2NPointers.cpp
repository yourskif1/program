// Swap2NPointers.cpp
#include <iostream>
#include <windows.h>

void Func(int *a, int *b)
{
    //system("chcp 65001");
    //SetConsoleOutputCP(CP_UTF8);
    //SetConsoleOutputCP(1251);
    //SetConsoleOutputCP(65001);
    //SetConsoleOutputCP(65001);    
    //SetConsoleCP(1251);

    // Встановлення кодування вводу на UTF-8
    //SetConsoleCP(65001);
    // Встановлення кодування виводу на UTF-8
    //SetConsoleOutputCP(65001);



    std::cout<<"В функції"<<std::endl;
    int temp = *a;
    *a = *b;
    *b = temp;

    std::cout << "a= " << *a << std::endl;
    std::cout << "b= " << *b << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    int a = 10;
    int b = 5;
    std::cout<<"В main програмі"<<std::endl;
    std::cout << "a= " << a << std::endl;
    std::cout << "b= " << b << std::endl;

    Func(&a, &b);
    std::cout<<"In main program"<<std::endl;
    std::cout << "a= " << a << std::endl;
    std::cout << "b= " << b << std::endl;

    system("pause");

    return 0;
}
