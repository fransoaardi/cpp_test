// g++ main.cpp -std=c++11

#include <iostream>

// void printValues(int x, int y{5});    // doesn't work
// void printValues(int x, int y(5));    // doesn't work
void printValues(int x, int y = 5);

int main()
{
    printValues(1, 2);
    printValues(2);

    return 0;
}

void printValues(int x, int y)
{
    std::cout << x << " : X \n";
    std::cout << y << " : Y \n";
}
