#include <iostream>
#include <vector>
#include <ranges>
#include <algorithm>

using std::views::iota;

auto main() -> int {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n, m;
  std::cin >> n >> m;

  std::vector<int> cards(n);

  for (auto i : iota(0, n))
    std::cin >> cards[i];

  std::vector<int> sums;

  for (auto i : iota(0, n - 2)) {
    for (auto j : iota(i + 1, n - 1)) {
      for (auto k : iota(j + 1, n)) {
        int sum = cards[i] + cards[j] + cards[k];
        if (sum <= m)
          sums.push_back(sum);
      }
    }
  }

  int greatest = 0;
  std::for_each(sums.cbegin(), sums.cend(), [&greatest](auto elem) {
    if (elem > greatest)
      greatest = elem;
  });

  std::cout << greatest;
}
