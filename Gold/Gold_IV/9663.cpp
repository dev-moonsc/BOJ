#include <iostream>

using namespace std;
int col[15];

int N, result;

bool check(int n) {
  for (int i = 0; i < n; ++i)
    if (col[i] == col[n] || (abs(col[n] - col[i]) == (n - i))) return false;

  return true;
}

void nQueen(int cnt) {
  if (cnt == N) {
    ++result;
    return;
  }

  for (int i = 0; i < N; ++i) {
    col[cnt] = i;
    if (check(cnt)) nQueen(cnt + 1);
  }
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  cin >> N;

  nQueen(0);

  cout << result << '\n';

  return 0;
}