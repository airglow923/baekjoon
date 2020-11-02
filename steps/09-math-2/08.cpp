#include <cmath>
#include <iostream>
#include <type_traits>

template<typename T>
concept Numeric =
    std::is_integral_v<T> ||
    std::is_floating_point_v<T>;

template<Numeric N>
auto square(N n)
{
    return std::pow((float) n, 2);
}

auto main() -> int
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    for (int x, y, z; std::cin >> x >> y >> z && (x || y || z);) {
        bool result = false;
        if (x >= y) {
            if (x >= z) {
                result = x == std::sqrt(square(y) + square(z));
            } else {
                result = z == std::sqrt(square(x) + square(y));
            }
        } else {
            if (y >= z) {
                result = y == std::sqrt(square(x) + square(z));
            } else {
                result = z == std::sqrt(square(x) + square(y));
            }
        }

        std::cout << (result ? "right" : "wrong") << '\n';
    }
}
