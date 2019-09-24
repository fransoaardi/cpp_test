#include <iostream>

struct Rectangle
{
    double length = 1.0; // non-static member initialization
    double width = 1.0;
};

int main()
{
    Rectangle x{2.0, 2.0}; // uniform initialization
    std::cout << x.length << " " << x.width << '\n';
    return 0;
}

// g++ main.cpp -std=c++14
// Output : 2 2

// g++ main.cpp -std=c++11
// compile error, non-static member initialization and uniform initialization can not be used at the same time.
