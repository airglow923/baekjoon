#include <iostream>
#include <concepts>

template<std::integral T>
auto factorial(T t) -> long long
{
    return t == 0 ? 1 : t * factorial(t - 1);
}

auto main() -> int
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int n;
    std::cin >> n;
    std::cout << factorial(n);
}
