/*

보드 전체를 2차원 배열로 구성할 필요가 없음.
퀸의 특성상 어차피 행 하나에는 한 개의 퀸만 존재할 수 있다.
따라서, 크기가 N인 배열을 만든 후, 각 열에 몇 번째 행의 퀸이 있는지 저장.

재귀의 종료 조건: x(현재 확인 중인 열) == N(보드의 크기)

대각선에 위치하는 조건: x좌표 차 == y좌표 차

*/

#include <iostream>

using namespace std;

int N, cnt;
int col[15];

bool valid(int x) {
  for (int i = 0; i < x; ++i)
    if (col[i] == col[x] || abs(col[x] - col[i]) == x - i) return false;
  return true;
}

void nQueen(int x) {
  if (x == N) {
    ++cnt;
    return;
  }

  for (int i = 0; i < N; ++i) {
    col[x] = i;
    if (valid(x)) nQueen(x + 1);
  }
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  cin >> N;
  nQueen(0);
  cout << cnt << '\n';

  return 0;
}