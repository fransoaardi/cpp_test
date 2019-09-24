#include <iostream>
#include <string>
#include <cstdint>

class RGBA
{
    using int8 = std::uint_fast8_t;

    int8 m_r;
    int8 m_g;
    int8 m_b;
    int8 m_a;

public:
    RGBA(int8 r = 0, int8 g = 0, int8 b = 0, int8 a = 255) : m_r{r}, m_g{g}, m_b{b}, m_a{a}
    {
    }

    void print()
    {
        std::cout << static_cast<int>(m_r) << ' ' << static_cast<int>(m_g) << ' ' << static_cast<int>(m_b) << ' ' << static_cast<int>(m_a) << '\n';
    }
};

class Ball
{
public:
    std::string m_color;
    double m_radius;

    Ball() : m_color{"black"}, m_radius{10.0} {}

    Ball(const std::string &color)
    {
        m_color = color;
        m_radius = 10;
    }

    Ball(double radius)
    {
        m_color = "black";
        m_radius = radius;
    }

    Ball(const std::string &color, double radius)
    {
        m_color = color;
        m_radius = radius;
    }

    void print()
    {
        std::cout << "color: " << m_color << ", radius:" << m_radius << '\n';
    }
};

int main()
{
    Ball def;
    def.print();

    Ball blue("blue");
    blue.print();

    Ball twenty(20.0);
    twenty.print();

    Ball blueTwenty("blue", 20.0);
    blueTwenty.print();

    RGBA teal{0, 127, 127};
    teal.print();

    return 0;
}