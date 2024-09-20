#include <iostream>
#include <stack>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  stack<int> s;
  int x;
  int cnt = 1;
  while (n--) {
    cin >> x;

    if (x == cnt)
      cnt++;
    else
      s.push(x);

    while (!s.empty() && s.top() == cnt) {
      s.pop();
      cnt++;
    }
  }

  if (s.empty())
    cout << "Nice" << '\n';
  else
    cout << "Sad" << '\n';

  return 0;
}