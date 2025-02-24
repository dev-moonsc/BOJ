/*

m개의 사이트 중 n개를 선택하면 되는 조합 문제이다.
다리가 겹칠 수 없다는 조건이 있으므로 사이트끼리 잇는 것은 생각할 필요 없음.

오버플로를 방지하기 위해 조합 계산의 단순화가 필요하다. (팩토리얼 사용 X)

*/

#include <iostream>

using namespace std;

int comb(int n, int k) {
  if (k > n - k) k = n - k;

  int ans = 1;
  for (int i = 1; i <= k; i++) {
    ans = ans * n-- / i;
  }

  return ans;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t, n, m;
  cin >> t;

  while (t--) {
    cin >> n >> m;
    cout << comb(m, n) << '\n';
  }

  return 0;
}