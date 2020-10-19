#include <iostream>

int main()
{
    int i;
    std::cin >> i;
    if (i % 400 == 0)
        std::cout << 1;
    else if (i % 4 == 0 && i % 100 != 0)
        std::cout << 1;
    else
        std::cout << 0;
}
