#include <iostream>
#include <limits>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    int min = std::numeric_limits<int>::max();
    int max = std::numeric_limits<int>::min();

    for (int i = 0; i < n; ++i) {
        int tmp;
        std::cin >> tmp;
        if (tmp < min)
            min = tmp;
        if (tmp > max)
            max = tmp;
    }
    std::cout << min << ' ' << max;
}
