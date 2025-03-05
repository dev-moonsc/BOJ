/*

15649번과 유사하지만 수열 자체가 오름차순 형태라는 조건이 추가되었으므로 노드
탐색 시작점을 (수열의 끝 + 1)로 설정한다.

*/

#include <iostream>

using namespace std;

int N, M;
bool checked[9];
int a[9];

void sol(int cnt) {
  if (cnt == M) {
    for (int i = 1; i <= M; ++i) cout << a[i] << ' ';
    cout << '\n';

    return;
  }

  for (int i = a[cnt] + 1; i <= N; ++i) {
    if (!checked[i]) {
      checked[i] = true;
      a[cnt + 1] = i;
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