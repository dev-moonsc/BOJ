#include <iostream>

using namespace std;

int N, M;
string square[50];
int answer = 1;

void input() {
  ios_base::sync_with_stdio(0), cin.tie(0);
  cin >> N >> M;
  for (int i = 0; i < N; ++i) cin >> square[i];
}

void solution() {
  for (int i = 0; i < N - 1; ++i) {
    for (int j = 0; j < M - 1; ++j) {
      char num = square[i][j];
      for (int k = 1; i + k < N && j + k < M; ++k) {
        if (square[i + k][j + k] == num && square[i + k][j] == num && square[i][j + k] == num && (k + 1) * (k + 1) > answer) answer = (k + 1) * (k + 1);
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