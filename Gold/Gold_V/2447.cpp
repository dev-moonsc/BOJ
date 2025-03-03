/*

Sol 1:
N > 3일 때 9개 구역으로 분할하여 공백이 될 가운데 구역을 제외한 8개 구역에 재귀
호출을 사용한다. 2차원 bool vector를 사용하므로 메모리 사용량이 많지만, 실행
속도가 빠르다.

Sol 2:
각 위치에 들어갈 기호를 바로 계산(필요하다면 재귀적으로)하여 출력한다. 메모리
사용량이 적지만, 모든 위치에 대해 반복 계산을 수행하므로 실행 속도가 느리다.

*/

// Sol 1
#include <iostream>
#include <vector>

using namespace std;

void star(int N, vector<vector<bool>> &v, int p, int q) {
  if (N == 3) {
    for (int i = 0; i < 3; i++)
      for (int j = 0; j < 3; j++)
        if (!(i == 1 && j == 1)) v[q + i][p + j] = true;

    return;
  }

  int n = N / 3;
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      if (!(i == 1 && j == 1)) star(n, v, p + i * n, q + j * n);
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int N;
  cin >> N;

  vector<vector<bool>> v(N, vector<bool>(N));

  star(N, v, 0, 0);

  string s;
  s.reserve(N * (N + 1));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) s.push_back(v[i][j] ? '*' : ' ');
    s.push_back('\n');
  }

  cout << s;

  return 0;
}

// // Sol 2
// #include <iostream>

// using namespace std;

// void star(int N, int i, int j) {
//   if ((i / N) % 3 == 1 && (j / N) % 3 == 1)
//     cout << ' ';
//   else if (N == 1)
//     cout << '*';
//   else
//     star(N / 3, i, j);
// }

// int main() {
//   ios_base::sync_with_stdio(0), cin.tie(0);

//   int N;
//   cin >> N;

//   for (int i = 0; i < N; i++) {
//     for (int j = 0; j < N; j++) star(N, i, j);
//     cout << '\n';
//   }

//   return 0;
// }