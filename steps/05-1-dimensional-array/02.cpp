#include <iostream>
#include <limits>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int pos;
    int max = std::numeric_limits<int>::min();

    for (int i = 1; i <= 9; ++i) {
        int tmp;
        std::cin >> tmp;
        if (tmp > max) {
            max = tmp;
            pos = i;
        }
    }
    std::cout << max << '\n' << pos;
}
