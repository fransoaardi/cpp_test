#include <iostream>

int main()
{
    // x{} can be used >= c++11, g++ -std=c++11 main.cpp
    int x{};
    std::cout << x;
    return 0;
}