#include <iostream>
void Show(const char* str);
void ShowBack(const char* str);
int CountLenght(const char* str);

int main()
{
    //const char* str("Hello world");
    const char* str = "Hello world";
    //std::cout << str << std::endl;
    Show(str);
    std::cout << std::endl;
    std::cout << CountLenght(str);

    std::cout << std::endl;
    ShowBack(str);
    std::cout << std::endl;



    return 0;
}

void Show(const char* str)
{
    while (*str != '\0')
    {
        std::cout << *str;
        str++;
    }
}

void ShowBack(const char* str)
{
    int length = 0;

    // Визначаємо довжину рядка
    while (*str != '\0') {
        str++;
        length++;
    }

    // Використовуємо цикл for для зменшення довжини
    for (int i = length; i >= 0; i--) {
        std::cout << *str;
        str--; // Переміщаємо вказівник на один символ назад
    }
        std::cout << std::endl;

}

int CountLenght(const char* str)
{
    int lenght = 0;
    while (*str++ != '\0')
    {
        lenght++;
        //str++;
    }
    return lenght;
}

