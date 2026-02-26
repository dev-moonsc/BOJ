#include <iostream>
#define MOD 1000000000

using namespace std;

long dp[101][10];

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int N;
  cin >> N;

  for (int i = 1; i < 10; ++i) dp[1][i] = 1;

  for (int i = 2; i <= N; ++i) {
    for (int j = 0; j < 10; ++j) {
      switch (j) {
        case 0:
          dp[i][j] = dp[i - 1][j + 1] % MOD;
          break;
        case 9:
          dp[i][j] = dp[i - 1][j - 1] % MOD;
          break;
        default:
          dp[i][j] = dp[i - 1][j + 1] + dp[i - 1][j - 1] % MOD;
      }
    }
  }

  long r = 0;
  for (int i = 0; i < 10; ++i) r += dp[N][i];

  cout << r % MOD << '\n';

  return 0;
}