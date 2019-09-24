#include <cstdlib>
#include <iostream>
#include <string>

int main()
{
    std::string s("3.12E-4");
    float p = atof(s.c_str());
    std::cout << p;
}
