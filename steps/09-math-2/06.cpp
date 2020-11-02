#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int x, y, w, h;
    std::cin >> x >> y >> w >> h;

    std::cout << std::min({x, y, w - x, h - y});
}
