#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, i, size;
    std::cin >> n;

    for (i = 1, size = 1; size <= n; ++i)
        size += i;

    int dividend, divisor;
    int nth = size - n - 1;

    if (--i % 2 == 0) {
        dividend = i - nth;
        divisor = 1 + nth;
    } else {
        dividend = 1 + nth;
        divisor = i - nth;
    }


    std::cout << dividend << '/' << divisor;
}
