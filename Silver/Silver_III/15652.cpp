/*

15649번과 유사하지만 같은 수를 여러 번 사용 가능하고 수열 자체가
비내림차순이여야 한다는 조건이 추가되었으므로 checked() 함수를 통한 중복 체크가
불필요하고, 노드 탐색 시작점을 수열의 끝으로 설정한다.

이때, 1부터 탐색을 하려면 수열의 front를 0이 아닌 1로 설정해야 함에 유의하자.

*/

#include <iostream>

using namespace std;

int N, M;
int a[9] = {1};

void sol(int cnt) {
  if (cnt == M) {
    for (int i = 1; i <= M; ++i) cout << a[i] << ' ';
    cout << '\n';

    return;
  }

  for (int i = a[cnt]; i <= N; ++i) {
    a[cnt + 1] = i;
    sol(cnt + 1);
  }
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  cin >> N >> M;
  sol(0);

  return 0;
}