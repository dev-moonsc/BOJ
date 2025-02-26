/*

find()는 iterator를 반환하므로,
존재 여부만 확인할 때는 count()가 더 간결함.

*/

#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
  // IO optimize
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  unordered_set<string> dancing = {"ChongChong"};
  string x, y;
  while (n--) {
    cin >> x >> y;

    bool x_in = dancing.count(x);
    bool y_in = dancing.count(y);

    if (x_in || y_in) {
      dancing.insert(x);
      dancing.insert(y);
    }
  }

  cout << dancing.size() << '\n';

  return 0;
}