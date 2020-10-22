#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::size_t c;
    std::cin >> c;

    for (std::size_t i = 0; i < c; ++i) {
        std::size_t n;
        std::cin >> n;

        std::vector<int> v(n);
        int sum = 0;

        for (std::size_t j = 0; j < n; ++j) {
            std::cin >> v[j];
            sum += v[j];
        }

        float average = (float) sum / n;

        std::size_t students =
            std::count_if(v.begin(), v.end(),
                    [=](int score) {return score > average;});

        std::cout << std::fixed << std::setprecision(3)
                  << (float) students / n * 100 << "%\n";
    }
}
