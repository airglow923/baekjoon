#include <iostream>
#include <vector>
#include <type_traits>
#include <algorithm>

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

template<typename T>
static constexpr auto remove_dup(std::vector<T>& v) -> void
{
    std::sort(v.begin(), v.end());
    auto it = std::unique(v.begin(), v.end());
    v.erase(it, v.end());
}

template<
    typename T,
    typename = typename std::enable_if_t<std::is_integral_v<T>>
>
static constexpr auto gen_constructors(T n) -> std::vector<T>
{
    std::vector<T> constructors;

    for (T i = 0; i < n; ++i) {
        T d = i;
        for (const auto& digit : get_digits_at_pos(i))
            d += digit;
        constructors.push_back(d);
    }

    remove_dup(constructors);

    return constructors;
}

auto main() -> int
{
    std::vector<int> self_numbers;
    const auto constructors = gen_constructors(10000);
    int i = 0;

    for (auto beg = constructors.begin(); i < 10000; ++i) {
        if (*beg == i) {
            ++beg;
            continue;
        }
        self_numbers.push_back(i);
    }

    for (const auto& n : self_numbers)
        std::cout << n << '\n';
}
