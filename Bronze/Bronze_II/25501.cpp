#include <iostream>

using namespace std;

int cnt;

int recursion(const string& s, int l, int r) {
  cnt++;
  if (l >= r) return 1;
  if (s[l] != s[r]) return 0;
  return recursion(s, l + 1, r - 1);
}

int isPalindrome(const string& s) { return recursion(s, 0, s.length() - 1); }

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    cnt = 0;
    string s;
    cin >> s;
    cout << isPalindrome(s) << ' ' << cnt << '\n';
  }

  return 0;
}