#include <iostream>
#include <concepts>

template<std::integral T>
auto isPrime(T t) -> bool
{
    if (t < 2)
        return false;

    if (t == 2)
        return true;

    if (t % 2 == 0)
        return false;

    for (T i = 3; i * i <= t; i += 2) {
        if (t % i == 0)
            return false;
    }

    return true;
}

auto main() -> int
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        std::cin >> n;

        int left = 0;
        int right = 0;

        for (int j = 2; j < n; ++j) {
            if (right && j >= right)
                break;

            if (isPrime(j) && isPrime(n - j)) {
                left = j;
                right = n - j;
            }
        }

        std::cout << left << ' ' << right << '\n';
    }
}
