#include <iomanip>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i) {
        int h, w, n;
        std::cin >> h >> w >> n;

        int floor = n % h;
        int room = n / h;

        std::cout << (floor ? floor : h)
                  << std::setw(2) << std::setfill('0')
                  << (floor ? room + 1 : room) << '\n';
    }
}
