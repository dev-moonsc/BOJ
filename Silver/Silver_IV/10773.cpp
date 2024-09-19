#include <iostream>
#include <stack>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int k, n;
  cin >> k;
  stack<int> s;

  while (k--) {
    cin >> n;

    if (!n)
      s.pop();
    else
      s.push(n);
  }

  int sum = 0;
  while (!s.empty()) {
    sum += s.top();
    s.pop();
  }

  cout << sum << '\n';

  return 0;
}