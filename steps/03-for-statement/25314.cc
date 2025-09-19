#include <bits/stdc++.h>

using namespace std;

auto
main() -> int {
  int n;

  cin >> n;

  const size_t n_longs = n / 4;

  for (size_t i = 0; i != n_longs; ++i) {
    cout << "long ";
  }

  cout << "int";
}
