/*

row, col, box에 대한 체크를 3차원 배열 check를 활용해 처리.

주의해야 할 점:
1. 이미 채워진 칸이면 다음 칸으로 이동
2. 유효한 경우에만 값 넣기 (아니면 조금 복잡해짐)
3. 문제가 해결됐음을 뜻하는 플래그 solved 활용하기 (백 트래킹 전에 검사할 것)
4. 백 트래킹을 통해 되돌리는 작업 필수 (안 하면 잘못된 값이 남아 있어 오류 발생)

백 트래킹 작업의 필요성:
값을 되돌리는 작업을 수행하지 않으면, 잘못된 값이 변수에 남아 있어
다음 경로를 탐색할 때 잘못된 결과를 도출할 수 있다.
따라서 재귀 호출 이후(종료되지 않고 되돌아오는 과정)에
값을 되돌리는 작업이 반드시 필요하다.

2차원 배열 출력 시의 테크닉:
문자열 인덱싱을 통해 2차원 배열 출력을 간결히 할 수 있다.
" \n"[j == x] 와 같이 사용하면,
j == x일 때 [1]이므로 '\n'
j != x일 때 [0]이므로 ' '이 출력된다.

*/

#include <iostream>

#define box (row / 3) * 3 + (col / 3)

using namespace std;

int board[9][9], blank;
bool check[3][9][10], solved;

bool valid(int n, int row, int col) {
  return !(check[0][row][n] || check[1][col][n] || check[2][box][n]);
}

void sudoku(int cnt, int row, int col) {
  if (cnt == blank) {  // 빈 칸이 더 이상 없으면 종료 (플래그 변경)
    solved = true;
    return;
  }

  int nrow = (col == 8) ? row + 1 : row;
  int ncol = (col + 1) % 9;

  if (board[row][col] != 0) {  // 이미 채워진 칸이면 다음 칸으로
    sudoku(cnt, nrow, ncol);
    return;
  }

  for (int i = 1; i <= 9; ++i) {
    if (valid(i, row, col)) {  // 유효성 검사
      board[row][col] = i;
      check[0][row][i] = check[1][col][i] = check[2][box][i] = true;

      sudoku(cnt + 1, nrow, ncol);

      if (solved) return;  // 플래그 체크

      board[row][col] = 0;  // 백 트래킹
      check[0][row][i] = check[1][col][i] = check[2][box][i] = false;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  for (int row = 0; row < 9; ++row)
    for (int col = 0; col < 9; ++col) {
      cin >> board[row][col];

      if (board[row][col])
        check[0][row][board[row][col]] = check[1][col][board[row][col]] =
            check[2][box][board[row][col]] = true;
      else
        ++blank;
    }

  sudoku(0, 0, 0);

  for (int i = 0; i < 9; ++i)
    for (int j = 0; j < 9; ++j) cout << board[i][j] << " \n"[j == 8];

  return 0;
}