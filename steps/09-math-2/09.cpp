#include <cmath>
#include <iomanip>
#include <iostream>
#include <type_traits>

template<typename T>
concept Numeric =
    std::is_integral_v<T> ||
    std::is_floating_point_v<T>;

template<Numeric N>
const N PI = std::acos(-N(1));

template<Numeric N, typename Output = double>
auto getTaxicabCircleArea(N n)
{
    auto r = std::sqrt(std::pow((Output) n, 2) * 2);
    return r * r;
}

auto main() -> int
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int r;
    std::cin >> r;

    std::cout << std::fixed << std::setprecision(5)
              << std::pow(r, 2) * PI<double> << '\n'
              << getTaxicabCircleArea(r);
}
