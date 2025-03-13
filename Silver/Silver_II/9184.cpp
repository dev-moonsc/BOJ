/*

범위 내의 모든 값을 미리 메모이제이션에 채우는 게 아니라,
필요할 때 해당 값이 채워져 있는지를 확인하고 아닐 경우 채우는 것임에 유의.

dp를 사용한다고 해서 재귀를 아예 사용하면 안 되는 것이 아니다.

대입 연산자(=)는 대입 후 해당 값을 반환한다.
즉, return x = ~~~; 처럼 사용할 수 있다.
이는 dp를 사용할 때 메모이제이션에 값을 채우면서 동시에 반환할 때 유용.
해당 코드는 아래 코드와 동치이다.
x = ~~~;
return x;

*/

#include <iostream>

using namespace std;

int dp[21][21][21];

int w(int a, int b, int c) {
  if (a < 1 || b < 1 || c < 1) return 1;
  if (a > 20 || b > 20 || c > 20) return w(20, 20, 20);
  if (dp[a][b][c]) return dp[a][b][c];

  if (a < b && b < c)
    return dp[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
  return dp[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) +
                       w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int a, b, c;
  cin >> a >> b >> c;
  while (!(a == -1 && b == -1 && c == -1)) {
    cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << '\n';
    cin >> a >> b >> c;
  };

  return 0;
}
