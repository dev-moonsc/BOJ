/*

조합의 관점: 한 팀을 선택하면 남은 사람들로 나머지 팀이 구성.

idx를 재귀의 파라미터로 활용하여 중복 탐색을 피함.

매 탐색마다 picked 배열을 확인할 필요가 없다.
어차피 선택 된 사람들은 탐색 중인 idx 앞쪽에만 위치한다.

만약 중복을 고려하지 않고 코드를 작성하면, 중복 계산이 발생한다.
{0, 1, 2} {3, 4, 5}와 {3, 4, 5} {0, 1, 2}는 동일하게 취급해야 한다.

이렇게 처리하는 법은 두 가지가 있다.

1. picked[0] = true로 설정하고 sol(1, 1)부터 탐색 시작.
즉, 0번 사람이 반드시 start팀에 속하도록 설정할 수 있다.

2. for 문 탐색 범위를 i < N - 1 까지로 설정.
이러면 마지막 사람은 범위에 들어가지 않으므로 반드시 link 팀에 속하게 된다.

즉, 처음 또는 마지막 사람을 특정 팀에 강제하여 위와 같은 중복을 피할 수 있다.

*/

#include <climits>
#include <iostream>

using namespace std;

int N, result = INT_MAX, S[20][20];
bool picked[20];

void calc() {
  int start = 0, link = 0;

  for (int i = 0; i < N; ++i)
    for (int j = 0; j < N; ++j) {
      if (picked[i] && picked[j]) start += S[i][j];
      if (!picked[i] && !picked[j]) link += S[i][j];
    }

  int diff = abs(start - link);

  if (result > diff) result = diff;
}

void sol(int cnt, int idx) {
  if (cnt == N / 2) {
    calc();
    return;
  }

  for (int i = idx; i < N - 1; ++i) {  // 마지막 사람은 link 팀에 배정
    picked[i] = true;
    sol(cnt + 1, i + 1);
    picked[i] = false;
  }
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  cin >> N;
  for (int i = 0; i < N; ++i)
    for (int j = 0; j < N; ++j) cin >> S[i][j];
  sol(0, 0);
  cout << result << '\n';

  return 0;
}