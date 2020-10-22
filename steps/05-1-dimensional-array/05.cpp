#include <iostream>
#include <limits>
#include <vector>
// #include <ranges>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<float> scores(n);
    std::vector<float> new_scores(n);

    int m = std::numeric_limits<int>::min();

    for (std::size_t i = 0; i < n; ++i) {
        std::cin >> scores[i];
        if (m < scores[i])
            m = scores[i];
    }

    auto calc = [m](float i) {return i / m * 100;};
    std::transform(scores.begin(), scores.end(), new_scores.begin(), calc);
    // auto new_scores = scores | std::views::transform(calc);

    float sum = 0;
    for (const auto& score : new_scores)
        sum += score;

    std::cout << (sum / n);
}
