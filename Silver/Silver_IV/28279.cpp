#include <deque>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  int command, x;
  deque<int> dq;
  while (n--) {
    cin >> command;
    switch (command) {
      case 1:
        cin >> x;
        dq.push_front(x);
        break;

      case 2:
        cin >> x;
        dq.push_back(x);
        break;

      case 3:
        if (dq.empty())
          cout << -1 << '\n';
        else {
          cout << dq.front() << '\n';
          dq.pop_front();
        }
        break;

      case 4:
        if (dq.empty())
          cout << -1 << '\n';
        else {
          cout << dq.back() << '\n';
          dq.pop_back();
        }
        break;

      case 5:
        cout << dq.size() << '\n';
        break;

      case 6:
        cout << dq.empty() << '\n';
        break;

      case 7:
        if (dq.empty())
          cout << -1 << '\n';
        else
          cout << dq.front() << '\n';
        break;

      default:
        if (dq.empty())
          cout << -1 << '\n';
        else
          cout << dq.back() << '\n';
        break;
    }
  }

  return 0;
}