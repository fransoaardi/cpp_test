#include <iostream>
#include <algorithm>

int main()
{
    // int *dynamic_array0 = new int[]();
    int *dynamic_array1 = new int[5]();
    int *dynamic_array2 = new int[5]{1, 2, 3, 4, 5};
    // int *dynamic_array3 = new int[]{1, 2, 3, 4, 5};
    // int *dynamic_array4{1, 2, 3, 4, 5};

    std::string *names = new std::string[5]{"Jason", "Mark", "Alex", "Chris", "John"};
    sort(names, names + 5);

    for (std::string *ptr = names; ptr < names + 5; ++ptr)
    {
        std::cout << *ptr << '\n';
    }

    delete[] names;

    return 0;
}