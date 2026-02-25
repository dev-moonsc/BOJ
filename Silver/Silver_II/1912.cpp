#include <algorithm>
#include <iostream>

using namespace std;

int arr[100000], dp[100000];

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) cin >> arr[i];

  int result = arr[0];
  dp[0] = arr[0];
  for (int i = 1; i < n; ++i) {
    dp[i] = max(dp[i - 1] + arr[i], arr[i]);
    result = max(result, dp[i]);
  }

  cout << result << '\n';

  return 0;
}