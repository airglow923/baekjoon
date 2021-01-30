#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

namespace {

auto hanoi_tower(std::vector<std::pair<int, int>>& moves, int n, int src,
                 int mid, int dest) -> void {
  if (n == 1) {
    moves.push_back({src, dest});
    return;
  }

  hanoi_tower(moves, n - 1, src, dest, mid);
  moves.push_back({src, dest});
  hanoi_tower(moves, n - 1, mid, src, dest);
}

} // namespace

auto main() -> int {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  std::vector<std::pair<int, int>> v;
  hanoi_tower(v, n, 1, 2, 3);

  std::cout << v.size() << '\n';

  std::for_each(v.begin(), v.end(), [](const auto& move) {
    std::cout << move.first << ' ' << move.second << '\n';
  });
}
