#include <cmath>
#include <iostream>

int
get_no_of_digits(int n) {
  int i;
  for (i = 0; n; n /= 10)
    ++i;
  return i;
}

int
get_digit(int n, int digit) {
  int exp = std::pow(10, digit);
  int result = n % exp;
  return result / std::pow(10, digit - 1);
}

int
main() {
  int a, b, total = 0;
  std::cin >> a >> b;
  for (int i = 0; i < get_no_of_digits(a); ++i) {
    int result = (a * get_digit(b, i + 1));
    std::cout << result << '\n';
    total += result * std::pow(10, i);
  }

  std::cout << total;
}
