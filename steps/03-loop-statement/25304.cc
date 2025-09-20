#include <bits/stdc++.h>

using namespace std;

auto
main() -> int {
  int x, n, a, b;

  cin >> x >> n;

  size_t total = 0;

  for (size_t i = 0; i != n; ++i) {
    cin >> a >> b;
    total += a * b;
  }

  if (total == x) {
    cout << "Yes";
  } else {
    cout << "No";
  }
}
