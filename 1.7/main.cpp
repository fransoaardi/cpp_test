#include <iostream>

int main()
{
    int x{2};
    // can initialize with variable
    int z{x};
    std::cout << z << '\n';
    x = 3;
    // z does not change, because z was not initialized with x's address
    std::cout << z << '\n';

    return 0;
}

// Output
// 2
// 2