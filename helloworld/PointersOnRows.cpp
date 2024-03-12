#include <iostream>
const int rows = 3; // Number of rows


int main()
{
    // Array of pointers to string literals
    const char* strings[rows] = {"Hello", "World", "C++"};

    // Display the strings
    for (int i = 0; i < rows; ++i) {
        const char* ptr = strings[i];
        while (*ptr != '\0') {
            std::cout << *ptr;
            ++ptr;
        }
        std::cout << std::endl;
    }

   return 0;

}

