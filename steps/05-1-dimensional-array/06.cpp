#include <iostream>
#include <limits>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::size_t n;
    std::cin >> n;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    for (std::size_t i = 0; i < n; ++i) {
        std::string s;
        std::getline(std::cin, s);

        int sum = 0;
        for (int score = 0; const auto& ch : s) {
            if (ch == 'X') {
                score = 0;
                continue;
            }

            if (ch == 'O')
                ++score;

            sum += score;
        }

        std::cout << sum << '\n';
    }
}
