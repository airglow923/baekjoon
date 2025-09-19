#include <iostream>

int
main() {
  int n, total = 0;
  std::cin >> n;
  for (int i = 1; i <= n; ++i)
    total += i;
  std::cout << total;
}
