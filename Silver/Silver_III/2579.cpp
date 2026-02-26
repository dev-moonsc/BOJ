#include <algorithm>
#include <iostream>

using namespace std;

int arr[301];
int dp[301];

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int N;
  cin >> N >> arr[1] >> arr[2];
  dp[1] = arr[1];
  dp[2] = arr[1] + arr[2];

  for (int i = 3; i <= N; ++i) {
    cin >> arr[i];
    dp[i] = max(dp[i - 2] + arr[i], dp[i - 3] + arr[i - 1] + arr[i]);
  }

  cout << dp[N] << '\n';

  return 0;
}