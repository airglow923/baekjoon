#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    auto mod = [](int val, int n) {return val % n;};
    std::cout << mod(a + b, c) << '\n'
              << mod(a % c + b % c, c) << '\n'
              << mod(a * b, c) << '\n'
              << mod((a % c) * (b % c), c);
}
