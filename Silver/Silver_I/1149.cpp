#include <algorithm>
#include <iostream>

using namespace std;

int dp[1001][3];

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int N, R, G, B;
  cin >> N;
  for (int i = 1; i <= N; ++i) {
    cin >> R >> G >> B;
    dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + R;
    dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + G;
    dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + B;
  }

  cout << min(dp[N][0], min(dp[N][1], dp[N][2])) << '\n';

  return 0;
}