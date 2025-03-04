/*

재귀를 이용하면 생각보다 굉장히 간단한 문제이다.

N번을 목표 기둥으로 옮기는 과정:
1. 1 ~ N - 1번을 보조 기둥으로 옮긴다.
2. N번을 목표 기둥으로 옮긴다.
3. 보조 기둥과 시작 기둥의 역할을 바꿔 재귀적을 반복한다.

재귀의 탈출 조건:
N == 1인 경우에는 단순히 옮기기만 하면 된다.

비트 시프트 연산자와 비트 논리 연산자를 통해 계산을 간단히 할 수 있다.
(N % 2 == 0) == (N & 1 == 0)
(N * 2) == (N << 1)
(2 ^ N) == (1 << N)

*/

#include <iostream>

using namespace std;

void hanoi(int N, int from, int to, int via) {
  if (N == 1) {
    cout << from << ' ' << to << '\n';
    return;
  }

  hanoi(N - 1, from, via, to);
  cout << from << ' ' << to << '\n';
  hanoi(N - 1, via, to, from);
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int N;
  cin >> N;
  cout << (1 << N) - 1 << '\n';
  hanoi(N, 1, 3, 2);

  return 0;
}