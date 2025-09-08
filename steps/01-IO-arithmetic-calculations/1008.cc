#include <iomanip>
#include <iostream>

int
main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << std::setprecision(15) << ((double)a / b);
}
