#include <iostream>
#include <concepts>

template<std::integral T>
auto fibonacci(T t) -> long long
{
    return t <= 1 ? t : fibonacci(t - 1) + fibonacci(t-2);
}

auto main() -> int
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int n;
    std::cin >> n;
    std::cout << fibonacci(n);
}
