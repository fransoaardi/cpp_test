#include <iostream>
#include <iterator> // for std::size()

int main()
{
    int array[5] = {1, 2, 3};
    std::cout << array[0] << '\n';
    std::cout << array[1] << '\n';
    std::cout << array[2] << '\n';
    std::cout << array[3] << '\n';
    std::cout << array[4] << '\n';

    // c++11 syntax
    int array_b[5]{1, 4, 3};

    std::cout << array_b[0] << '\n';
    std::cout << array_b[1] << '\n';
    std::cout << array_b[2] << '\n';
    std::cout << array_b[3] << '\n';
    std::cout << array_b[4] << '\n';

    int array_c[] = {1, 1, 2, 3, 5, 8, 13, 21};
    // c++17 syntax
    std::cout << "The array has: " << std::size(array_c) << " elements\n";

    int prime[5]{}; // hold the first 5 prime numbers
    prime[5] = 13;
    std::cout << prime[5];

    return 0;
}