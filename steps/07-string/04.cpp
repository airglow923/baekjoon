#include <iostream>
#include <string>
#include <limits>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    auto clear_cin = [](int ch) {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), ch);
    };

    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int re;
        std::cin >> re;
        clear_cin(' ');

        std::string s, res;
        std::getline(std::cin, s);

        for (const auto& ch : s) {
            for (int j = 0; j < re; ++j)
                res += ch;
        }

        std::cout << res << '\n';
    }
}
