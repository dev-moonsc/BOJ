#include <iostream>

using namespace std;

int fac(int n) {
  int ans = 1;
  while (n > 1) {
    ans *= n--;
  }

  return ans;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, k;
  cin >> n >> k;
  cout << fac(n) / (fac(k) * fac(n - k)) << '\n';

  return 0;
}