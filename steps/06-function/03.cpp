#include <iostream>
#include <vector>
#include <type_traits>

template<
    typename T,
    typename = typename std::enable_if_t<std::is_integral_v<T>>
>
static constexpr auto get_digits_at_pos(T n) -> std::vector<T>
{
    std::vector<T> v;
    for (; n; n /= 10)
        v.push_back(n % 10);
    return v;
}

template<
    typename T,
    typename = typename std::enable_if_t<std::is_integral_v<T>>
>
static constexpr auto is_hansu(T n) -> bool
{
    if (n < 100)
        return true;

    const auto digits = get_digits_at_pos(n);

    T d = digits[1] - digits[0];

    for (auto beg = digits.begin() + 2; beg != digits.end(); ++beg) {
        if (*beg != *(beg - 1) + d)
            return false;
    }

    return true;
}

auto main() -> int
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    int res = 0;

    for (int i = 1; i <= n; ++i) {
        if (is_hansu(i))
            ++res;
    }

    std::cout << res;
}
