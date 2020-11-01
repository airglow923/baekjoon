#include <cmath>
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

    for (T i = 3; i < std::sqrt(t) + 1; i += 2) {
        if (t % i == 0)
            return false;
    }

    return true;
}

auto main() -> int
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, primes = 0;
    std::cin >> n;
    
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;

        if (isPrime(num))
            ++primes;
    }

    std::cout << primes;
}
