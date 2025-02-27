/*

비교 함수 작성과 람다 표현에 익숙해질 것.

*/

#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <utility>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  unordered_map<string, int> um;
  um.reserve(n);

  string s;
  while (n--) {
    cin >> s;
    if (s.length() >= m) um[s]++;
  }

  vector<pair<string, int>> v(um.begin(), um.end());

  sort(v.begin(), v.end(), [](const auto &a, const auto &b) {
    if (a.second != b.second)
      return a.second > b.second;
    else if (a.first.length() != b.first.length())
      return a.first.length() > b.first.length();
    return a.first < b.first;
  });

  for (const auto &[word, _] : v) cout << word << '\n';

  return 0;
}