/*

어떤 수 n의 진약수가 모두 주어졌을 때,
n = (최대 진약수) * (최소 진약수)

*/

#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  int arr[51];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  sort(arr, arr + n);

  cout << arr[0] * arr[n - 1] << '\n';

  return 0;
}