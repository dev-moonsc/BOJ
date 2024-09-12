#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool parenthesis(string s) {
  stack<char> st;
  for (char c : s) {
    if (c == '(')
      st.push(c);
    else {
      if (st.empty()) return false;
      st.pop();
    }
  }

  return st.empty();
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;

    if (parenthesis(s))
      cout << "YES" << '\n';
    else
      cout << "NO" << '\n';
  }

  return 0;
}