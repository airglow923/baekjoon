#include <iostream>

int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n, x, a;
    std::cin >> n >> x;
    for (int i = 0; i < n; ++i) {
        std::cin >> a;
        if (a < x)
            std::cout << a << ' ';
    }
}
