#include <algorithm>
#include <iostream>

using namespace std;

long dp[101] = {0, 1, 1};

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  for (int i = 3; i < 101; ++i) dp[i] = dp[i - 2] + dp[i - 3];

  int T, N;
  cin >> T;

  while (T--) {
    cin >> N;
    cout << dp[N] << '\n';
  }

  return 0;
}
