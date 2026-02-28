#include <iostream>

using namespace std;

int answer, N, M, r, c, d, room[50][50];
int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};

void input() {
  ios_base::sync_with_stdio(0), cin.tie(0);
  cin >> N >> M >> r >> c >> d;
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < M; ++j) cin >> room[i][j];
  }
}

void solution() {
  bool running = true;
  while (true) {
    if (room[r][c] == 0) {
      room[r][c] = 2;
      answer++;
    }

    bool near = false;
    for (int i = 0; i < 4; ++i) {
      int nr = r + dr[i];
      int nc = c + dc[i];
      if (!room[nr][nc]) {
        near = true;
        break;
      }
    }

    if (!near) {
      int br = r - dr[d];
      int bc = c - dc[d];
      if (room[br][bc] == 1) return;
      r = br;
      c = bc;
    } else {
      d = (d + 3) % 4;
      int fr = r + dr[d];
      int fc = c + dc[d];
      if (room[fr][fc] == 0) {
        r = fr;
        c = fc;
      }
    }
  }
}

int main() {
  input();
  solution();

  cout << answer << '\n';

  return 0;
}