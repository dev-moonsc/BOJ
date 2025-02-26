/*

unordered_set의 해시 충돌로 인해
set이 더 빠른 경우가 존재할 수 있음에 유의

*/

#include <iostream>
#include <set>

using namespace std;

int main() {
  // IO optimize
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  int cnt = 0;
  set<string> s;
  string str;
  while (n--) {
    cin >> str;

    if (str == "ENTER") {
      cnt += s.size();
      s.clear();
      continue;
    }

    s.insert(str);
  }

  cnt += s.size();

  cout << cnt << '\n';

  return 0;
}