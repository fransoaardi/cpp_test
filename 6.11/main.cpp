#include <iostream>
int main()
{
    int value1 = 5;
    int value2 = 6;

    int &ref = value1; // okay, ref is now an alias for value1

    std::cout << ref << " " << &ref << '\n';
    std::cout << value1 << " " << &value1 << '\n';
    std::cout << value2 << " " << &value2 << '\n';

    ref = value2; // assigns 6 (the value of value2) to value1 -- does NOT change the reference!

    std::cout << ref << " " << &ref << '\n';
    std::cout << value1 << " " << &value1 << '\n';
    std::cout << value2 << " " << &value2 << '\n';

    return 0;
}