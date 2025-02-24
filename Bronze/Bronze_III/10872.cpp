#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  int ans = 1;
  while (n > 1) {
    ans *= n--;
  }

  cout << ans << '\n';

  return 0;
}