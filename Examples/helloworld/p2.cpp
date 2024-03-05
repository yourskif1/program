#include <iostream>

struct MyStruct
{
    char a;
    int b;
    double c;
};

int main()
{
    MyStruct variable={'G',10,38.4};

    std::cout<<"variable.a = "<< variable.a <<std::endl;

    return 0;
}