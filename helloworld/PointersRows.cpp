#include <iostream>

int main()
{
    const int size = 4; 
    const char *str[] = {"Hello!", "How", "are", "you"};

    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; str[i][j] != '\0'; j++) 
        {
            std::cout << str[i][j]; 
        }
        std::cout << std::endl;
    }

    return 0;
}
