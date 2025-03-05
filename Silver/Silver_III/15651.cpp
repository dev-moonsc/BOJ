/*

15649번과 유사하지만 같은 수를 여러 번 사용 가능하다는 조건이 추가되었으므로
checked() 함수를 통한 중복 체크가 불필요하다.

*/

#include <iostream>

using namespace std;

int N, M;
int a[7];

void sol(int cnt) {
  if (cnt == M) {
    for (int i = 0; i < M; ++i) cout << a[i] << ' ';
    cout << '\n';

    return;
  }

  for (int i = 1; i <= N; ++i) {
    a[cnt] = i;
    sol(cnt + 1);
  }
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  cin >> N >> M;
  sol(0);

  return 0;
}