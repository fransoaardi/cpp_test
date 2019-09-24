#include <iostream>

int main()
{
    int bin{};
    bin = 0b1; // assign binary 0000 0001 to the variable
    std::cout << bin << '\n';
    bin = 0b11; // assign binary 0000 0011 to the variable
    std::cout << bin << '\n';
    bin = 0b1010; // assign binary 0000 1010 to the variable
    std::cout << bin << '\n';
    bin = 0b1111'0000; // ' works as digit separator
    std::cout << bin << '\n';

    return 0;
}

// $ g++ main.cpp -std=c++14
// Output
// 1
// 3
// 10
// 240