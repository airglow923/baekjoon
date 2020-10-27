#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, i = 0;
    std::cin >> n;

    for (int sum = 0; sum < n - 1; ++i, sum += i * 6)
        continue;

    std::cout << (n == 1 ? 1 : i + 1);
}
