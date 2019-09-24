#include <iostream>
#include <vector>

void printStack(const std::vector<int> &stack)
{
    for (const auto &element : stack)
        std::cout << element << ' ';
    std::cout << "(cap " << stack.capacity() << " length " << stack.size() << ")\n";
}

int main()
{
    std::vector<int> stack;
    stack.push_back(5);
    printStack(stack);
    stack.push_back(4);
    printStack(stack);
    //  int a = stack.pop_back();       // pop_back() doesn't return value
    int a = stack.back();
    std ::cout << '\n'
               << a << '\n';

    return 0;
}
