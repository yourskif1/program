#include <iostream>
#include <cstring>

int main()
{
    const int SIZE = 1000;
    char buffer[SIZE];

    std::cin.getline(buffer,SIZE);

    int length = strlen(buffer);
    char* str = new char[length+1];
    strcpy_s(str,length+1,buffer);
    std::cout<<str<<std::endl;
    delete[] str;
    str=nullptr;

    return 0;
}