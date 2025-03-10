/*

계산한 숫자 개수인 cnt와 현재까지의 연산 결과인 sum을 인자로 받음.

시작 시 sol(0, 0)이 아닌 sol(1, nums[0])로 호출해야 함.
첫 숫자를 연산 결과에 포함시킨 후 시작해야 하기 때문이다.

(N - 1)개의 연산자를 직접 배열에 저장하는 것보다 카운팅 배열을 쓰는 것이 좋다.

여기서도 마찬가지로 재귀 이후 백트래킹을 반드시 해줘야 함에 유의.

max = INT_MIN, min = INT_MAX 으로 초기화 하면 간결한 코드 작성 가능.

*/

#include <climits>
#include <iostream>

using namespace std;

int N, nums[11], ops[4], max_val = INT_MIN, min_val = INT_MAX;

void sol(int cnt, int sum) {
  if (cnt == N) {
    max_val = max(max_val, sum);
    min_val = min(min_val, sum);
    return;
  }

  for (int i = 0; i < 4; ++i) {
    if (ops[i] == 0) continue;

    --ops[i];

    switch (i) {
      case 0:
        sol(cnt + 1, sum + nums[cnt]);
        break;
      case 1:
        sol(cnt + 1, sum - nums[cnt]);
        break;
      case 2:
        sol(cnt + 1, sum * nums[cnt]);
        break;
      default:
        sol(cnt + 1, sum / nums[cnt]);
        break;
    }

    ++ops[i];
  }
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  cin >> N;

  for (int i = 0; i < N; ++i) cin >> nums[i];
  for (int i = 0; i < 4; ++i) cin >> ops[i];

  sol(1, nums[0]);

  cout << max_val << '\n' << min_val << '\n';

  return 0;
}