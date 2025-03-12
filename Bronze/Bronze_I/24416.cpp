#include <iostream>

using namespace std;

int dp[41], x, y;

long fib_recur(int n) {
  if (n == 1 || n == 2) {
    ++x;
    return 1;
  }
  return fib_recur(n - 1) + fib_recur(n - 2);
}

long fib_dp(int n) {
  dp[1] = dp[2] = 1;
  for (int i = 3; i <= n; ++i) {
    ++y;
    dp[i] = dp[i - 1] + dp[i - 2];
  }
  return dp[n];
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int n;
  cin >> n;

  fib_recur(n);
  fib_dp(n);

  cout << x << ' ' << y << '\n';

  return 0;
}