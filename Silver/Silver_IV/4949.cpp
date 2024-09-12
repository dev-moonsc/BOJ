#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool parenthesis(string s) {
  stack<char> st;
  for (char c : s) {
    if (c == '(' || c == '[')
      st.push(c);
    else if (c == ')') {
      if (st.empty() || st.top() != '(') return false;
      st.pop();
    } else if (c == ']') {
      if (st.empty() || st.top() != '[') return false;
      st.pop();
    }
  }

  return st.empty();
}

int main() {
  string s;
  getline(cin, s);
  while (s != ".") {
    if (parenthesis(s))
      cout << "yes" << '\n';
    else
      cout << "no" << '\n';

    getline(cin, s);
  }

  return 0;
}