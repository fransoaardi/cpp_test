#include <iostream>
int main()
{
    char s1[4] = "cat";
    char s2[4] = "dog";
    char *p1 = s1;
    char *p2 = s2;

    // the following is a string copy operation
    while (*p1++ = *p2++)
    {
        std::cout << p1 << " " << p2 << '\n';
        std::cout << s1 << '\n';
        std::cout << s2 << '\n';
    }

    // s2 was copied into s1, so now they are both equal to "dog"
    printf("%s %s", s1, s2);
}