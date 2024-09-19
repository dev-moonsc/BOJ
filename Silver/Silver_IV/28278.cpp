#include <iostream>
#include <stack>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  int c, x;
  stack<int> stack;
  while (n--) {
    cin >> c;
    switch (c) {
      // push
      case 1:
        cin >> x;
        stack.push(x);
        break;

      // pop
      case 2:
        if (stack.empty())
          cout << -1 << '\n';
        else {
          cout << stack.top() << '\n';
          stack.pop();
        }
        break;

      // size
      case 3:
        cout << stack.size() << '\n';
        break;

      // is_empty
      case 4:
        cout << stack.empty() << '\n';
        break;

      // top
      default:
        if (stack.empty())
          cout << -1 << '\n';
        else
          cout << stack.top() << '\n';
        break;
    }
  }

  return 0;
}
