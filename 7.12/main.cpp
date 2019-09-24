#include <iostream>
#include <string>

int main()
{
    std::string input{" "};
    if (!input.empty())
    {
        std ::cout << input;
    }
    else
    {
        std::cerr << "fails, input is empty";
    }
    return 0;
}