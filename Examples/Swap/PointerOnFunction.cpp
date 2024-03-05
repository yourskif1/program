// L65_Указатель_на_функцию.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void foo1()
{
    cout << "void Foo 1()" << endl;
}
void foo2()
{
    cout << "void Foo 2()" << endl;
}

int main()
{
//    std::cout << "Hello World!\n";
    void(*fooPointer) ();
    fooPointer = foo1;
    fooPointer();

}
