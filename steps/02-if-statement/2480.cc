#include <bits/stdc++.h>

using namespace std;

auto
main() -> int {
  int dice1, dice2, dice3;

  cin >> dice1 >> dice2 >> dice3;

  int ret = 0;

  if (dice1 == dice2 && dice1 == dice3) {
    ret = 10000 + dice1 * 1000;
  } else if (dice1 == dice2) {
    ret = 1000 + dice1 * 100;
  } else if (dice1 == dice3) {
    ret = 1000 + dice1 * 100;
  } else if (dice2 == dice3) {
    ret = 1000 + dice2 * 100;
  } else {
    ret = max({dice1, dice2, dice3}) * 100;
  }

  cout << ret;
}
