#include <iostream>

int main()
{
    int n, cycle = 1;
    std::cin >> n;
    int num = n % 10 * 10 + ((n % 100 / 10 + n % 10) % 10);

    for (; num != n; ++cycle)
        num = num % 10 * 10 + ((num % 100 / 10 + num % 10) % 10);

    std::cout << cycle;
}
