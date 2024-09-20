/*
Deque 회전의 이해
steps > 0 일 경우, 이미 한 번 pop을 하였으므로 steps - 1번 회전
steps < 0 일 경우, steps번 회전

회전 횟수를 전체 dq 길이로 나누어 불필요한 반복 회전을 줄인다.
*/

#include <deque>
#include <iostream>

using namespace std;

void rotation(deque<pair<int, int>> &dq, int steps) {
  int n = dq.size();
  if (steps > 0) {
    steps = (steps - 1) % n;
    for (int i = 0; i < steps; i++) {
      dq.push_back(dq.front());
      dq.pop_front();
    }
  } else {
    steps = (-steps) % n;
    for (int i = 0; i < steps; i++) {
      dq.push_front(dq.back());
      dq.pop_back();
    }
  }
}

int main() {
  int n, k;
  cin >> n;

  deque<pair<int, int>> dq;
  for (int i = 1; i <= n; i++) {
    cin >> k;
    dq.push_back(make_pair(i, k));
  }

  while (!dq.empty()) {
    cout << dq.front().first << ' ';
    int steps = dq.front().second;
    dq.pop_front();

    if (!dq.empty()) rotation(dq, steps);
  }

  cout << '\n';

  return 0;
}