/*
stack에 삽입한 후 바로 pop하는 것의 무의미한 행동
여러 개의 큐가 하나로 연결되어 있다는 것은, 큐 하나만 있는 것과 같다.
qs안에 원소를 처음 넣을 때는 push_back으로,
이후에 삽입할 때는 push_front인 점을 주의할 것.
*/

#include <deque>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, x;
  cin >> n;
  deque<int> qs;
  vector<int> type(n);
  for (int i = 0; i < n; i++) cin >> type[i];

  for (int i = 0; i < n; i++) {
    cin >> x;
    if (!type[i]) qs.push_back(x);
  }

  cin >> n;
  while (n--) {
    cin >> x;

    qs.push_front(x);
    cout << qs.back() << ' ';
    qs.pop_back();
  }

  cout << '\n';

  return 0;
}