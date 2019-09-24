#include <iostream>
int main()
{
    typedef double distance_t;
    distance_t a{0.1};
    std::cout << a << '\n';

    // Favor type aliases over typedefs
    // if your compiler is C++11 compatible.
    using john_custom = float;
    john_custom b{0.3};
    std::cout << b;
    return 0;
}