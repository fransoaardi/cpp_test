#include <iostream>
int main()
{
    int fibonacci[]{0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
    for (int number : fibonacci)
    {
        number += 1;
        std::cout << number << ' ' << &number << '\n';
    }

    for (int number : fibonacci)
    {
        std::cout << number << ' ' << '\n';
    }

    for (int &number : fibonacci)
    {
        number += 1;
        std::cout << number << ' ' << &number << '\n';
    }

    for (int number : fibonacci)
    {
        std::cout << number << ' ' << '\n';
    }

    const int num_students = 5;
    int scores[num_students]{84, 92, 76, 81, 56};
    int max_score = 0;
    for (const auto &score : scores)
    {
        if (score > max_score)
        {
            max_score = score;
        }
    }
    std ::cout << max_score << '\n';

    return 0;
}