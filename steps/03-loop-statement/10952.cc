#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

auto
solve() -> void {
  int a, b;
  while (true) {
    std::cin >> a >> b;
    if (!a && !b)
      break;
    std::cout << (a + b) << '\n';
  }
}

auto
main() -> int {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  solve();
}
