#include <iostream>

void my_func()
{
    std::cout << "my_func from main.cpp";
}

// my_func() is declared in both "main.cpp" and "others.cpp"
// it fails when compile "main.cpp" and "others.cpp" at the same time.
int main()
{
    my_func();
    return 0;
}