#include <iostream>

using namespace std;

int arr[1001];
int dp[1001];

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int N;
  cin >> N;
  for (int i = 1; i <= N; ++i) cin >> arr[i];

  int result = 0;
  for (int i = 1; i <= N; ++i) {
    dp[i] = 1;
    for (int j = 1; j < i; ++j) {
      if (arr[j] < arr[i]) dp[i] = max(dp[j] + 1, dp[i]);
    }
    result = max(dp[i], result);
  }

  cout << result << '\n';

  return 0;
}