#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::vector<int> v(10);
    for (std::size_t i = 0; i < 10; ++i) {
        int tmp;
        std::cin >> tmp;
        v[i] = tmp % 42;
    }

    std::sort(v.begin(), v.end());
    auto last = std::unique(v.begin(), v.end());
    v.erase(last, v.end());

    std::cout << v.size();
}
