#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a, b, c;
    std::cin >> a >> b >> c;

    if (c <= b) {
        std::cout << -1;
        return 0;
    }

    int res = a / (c - b);
    int i = (c - b) % a == 0 ? res : res + 1;
    std::cout << i;
}
