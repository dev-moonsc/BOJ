/*

Back Tracing Algorithm:
재귀적으로 문제를 해결하다 제한 조건에 위배될 경우, 가지치기(pruning) 한 후 다음
단계로 넘어간다.

*/

#include <iostream>

using namespace std;

int N, M;
bool checked[9];
int a[8];

void sol(int cnt) {
  if (cnt == M) {
    for (int i = 0; i < M; ++i) cout << a[i] << ' ';
    cout << '\n';

    return;
  }

  for (int i = 1; i <= N; ++i) {
    if (!checked[i]) {
      checked[i] = true;
      a[cnt] = i;
      sol(cnt + 1);
      checked[i] = false;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  cin >> N >> M;
  sol(0);

  return 0;
}