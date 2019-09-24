#include <functional>
#include <iostream>

int foo()
{
    return 5;
}

int goo()
{
    return 6;
}

int hoo(int a)
{
    return 7;
}

int main()
{
    std::function<int()> fn = foo;
    std::cout << foo() << '\n';
    fn = goo;
    std::cout << goo() << '\n';
    // fn = hoo;            compile fails
    // std::cout << hoo(1) << '\n';

    return 0;
}