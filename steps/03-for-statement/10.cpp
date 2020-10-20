#include <iostream>

int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < n - i; ++j)
            std::cout << ' ';
        for (int j = i; j; --j)
            std::cout << '*';
        std::cout << '\n';
    }
}
