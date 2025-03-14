/*

길이가 N인 수열을 만들려면
길이가 N-1인 수열 뒤에 '1'을 붙이거나,
길이가 N-2인 수열 뒤에 '00'을 붙이는 두 가지 경우가 있다.
따라서 점화식이 아래와 같은 피보나치 구조를 가진다.

dp[n] = dp[n - 1] + dp[n - 2]

이 문제에서는 결과값을 15746으로 나눈 나머지를 구해야 한다.
(a + b) % c == ((a % c) + (b % c)) % c 성질을 이용하여
각 연산마다 나머지를 적용하면, 값이 커지지 않으므로 오버플로우를 방지할 수 있다.

만약 나머지가 아닌 값 자체를 구하는 문제였다면,
결과값이 매우 커져 long long으로도 표현할 수 없었을 것이다.

또한 n, n - 1, n - 2 세 값만을 활용하는 피보나치 수열은,
굳이 배열을 사용할 필요 없이 변수 세 개만 사용하도록 최적화할 수 있다.
이렇게 하면 메모리 사용량을 최소화할 수 있다.ㄴ

*/

#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int N, result;
  cin >> N;

  if (N == 1 || N == 2)
    result = N;
  else {
    int tmp1 = 1, tmp2 = 2;
    for (int i = 3; i <= N; ++i) {
      result = (tmp1 + tmp2) % 15746;
      tmp1 = tmp2;
      tmp2 = result;
    }
  }

  cout << result << '\n';

  return 0;
}