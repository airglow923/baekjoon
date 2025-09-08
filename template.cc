#include <bits/stdc++.h>

using namespace std;

template <typename A, typename B>
auto
operator<<(ostream &os, const pair<A, B> &p) -> ostream & {
  return os << '(' << p.first << ", " << p.second << ')';
}
template <typename T_container, typename T = typename enable_if<
                                    !is_same<T_container, string>::value,
                                    typename T_container::value_type>::type>
auto
operator<<(ostream &os, const T_container &v) -> ostream & {
  os << '{';
  string sep;
  for (const T &x : v)
    os << sep << x, sep = ", ";
  return os << '}';
}

auto
dbg_out() -> void {
  cerr << endl;
}

template <typename Head, typename... Tail>
auto
dbg_out(Head H, Tail... T) -> void {
  cerr << ' ' << H;
  dbg_out(T...);
}

#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

auto
solve(int a, int b, int c) -> void {}

auto
main() -> int {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int a, b, c;
  cin >> a >> b >> c;

  solve(a, b, c);
}
