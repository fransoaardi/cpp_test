#include <iostream>

int add(int, int);

// $ g++ -std=c++11 add.cpp main.cpp
int main()
{
    std::cout << "this is main\n";
    std::cout << add(3, 4);
    return 0;
}