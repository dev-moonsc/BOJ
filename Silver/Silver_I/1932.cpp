#include <algorithm>
#include <iostream>

using namespace std;

long dp[501][501];

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int n, x;
  cin >> n;
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= i; ++j) {
      cin >> x;
      dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + x;
    }
  }

  cout << *max_element(dp[n] + 1, dp[n] + n + 1) << '\n';

  return 0;
}