#include <cmath>
#include <iostream>

double getDistanceBetweenTwo2DCoords(
    double x1, double y1, double x2, double y2)
{
    return std::sqrt(std::pow(x1 - x2, 2) + std::pow(y1 - y2, 2));
}

auto main() -> int
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i) {
        int x1, y1, r1, x2, y2, r2;
        std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        auto distance = getDistanceBetweenTwo2DCoords(x1, y1, x2, y2);

        if (distance) {
            int sum = r1 + r2;
            int abs = std::abs(r1 - r2);

            if (distance > abs && sum > distance)
                std::cout << 2 << '\n';
            else if (abs == distance || sum == distance)
                std::cout << 1 << '\n';
            else
                std::cout << 0 << '\n';
        } else {
            if (r1 == r2)
                std::cout << -1 << '\n';
            else
                std::cout << 0 << '\n';
        }
    }
}
