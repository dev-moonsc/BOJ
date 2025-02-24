/*

bit shift operator [ << / >> ]

x << y : x의 bit을 왼쪽으로 y bit만큼 이동
- 빈 자리는 0으로 padding
- overflow가 발생 할 수 있다

x >> y : x의 bit을 오른쪽으로 y bit만큼 이동
- 빈 자리 padding 방식
  - unsigned int : 0으로 padding
  - int : 부호 bit 유지
- n이 너무 크면 값이 0이 될 수 있다

1 << n 을 통해 2의 거듭제곱 값을 간편히 구할 수 있다

*/

#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  cout << (1 << n) << '\n';  // bit shift

  return 0;
}