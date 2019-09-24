#include <iostream>

class IntPair
{
public:
    int m_x;
    int m_y;
    void print()
    {
        std::cout << "Pair("
                  << m_x
                  << ", "
                  << m_y
                  << ")\n";
    }
};

int main()
{
    IntPair p1{1, 2};
    IntPair p2{2, 3};
    p1.print();
    p2.print();
    return 0;
}