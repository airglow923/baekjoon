#include <iostream>
#include <vector>
#include <ranges>

using namespace std;

namespace {

auto MakeBlock(vector<vector<char>>& stars, const int& row, const int& col)
    -> void {
  for (const auto& i : views::iota(0, 3)) {
    for (const auto& j : views::iota(0, 3)) {
      if (!(i == 1 && j == 1))
        stars[row + i][col + j] = '*';
    }
  }
}

auto MakeStars(vector<vector<char>>& stars, const size_t size, const int& row,
               const int& col) -> void {
  if (size == 3) {
    MakeBlock(stars, row, col);
    return;
  }

  // top left
  MakeStars(stars, size / 3, row, col);
  // top middle
  MakeStars(stars, size / 3, row, col + size / 3);
  // top right
  MakeStars(stars, size / 3, row, col + size * 2 / 3);
  // middle left
  MakeStars(stars, size / 3, row + size / 3, col);
  // middle right
  MakeStars(stars, size / 3, row + size / 3, col + size * 2 / 3);
  // bottom left
  MakeStars(stars, size / 3, row + size * 2 / 3, col);
  // bottom middle
  MakeStars(stars, size / 3, row + size * 2 / 3, col + size / 3);
  // bottom right
  MakeStars(stars, size / 3, row + size * 2 / 3, col + size * 2 / 3);
}

auto PrintStars(const vector<vector<char>>& stars) -> void {
  for (const auto& row : stars) {
    for (const auto& col : row) {
      cout << col;
    }
    cout << '\n';
  }
}

} // namespace

auto main() -> int {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  vector<vector<char>> stars(n, vector<char>(n, ' '));

  MakeStars(stars, stars.size(), 0, 0);
  PrintStars(stars);
}
