#include <iostream>

using ll = long long;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll t;
    std::cin >> t;

    for (ll i = 0; i < t; ++i) {
        ll x, y;
        std::cin >> x >> y;


        ll distance = y - x;

        if (distance == 1) {
            std::cout << 1 << '\n';
            continue;
        } else if (distance == 2) {
            std::cout << 2 << '\n';
            continue;
        }

        ll hops = 3;
        distance -= 2;

        for (ll j = 0, rpt = 2; j < distance; ++rpt) {
            for (ll r = 0; r < 2; ++r, ++hops) {
                j += rpt;
                if (j >= distance)
                    break;
            }
        }

        std::cout << hops << '\n';
    }
}
