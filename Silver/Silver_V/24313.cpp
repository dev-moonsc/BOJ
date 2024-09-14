/*
a1 * n0 + a0 <= c * n0을 만족하는지 판단하는 문제.

그러나 단순히 if문의 조건을 위 코드로 작성하면 오답이 되는데,
a0 < 0 || a1 < 0을 고려해야 하기 때문이다.

a0 < 0인 경우, a1 > c일 때 n0에서는 조건을 만족하지만 n이 증가하면서 만족하지 않게 됨.
a1 < 0인 경우, n0부터 조건을 만족하지 못함을 알 수 있기 때문에 고려하지 않아도 됨.

즉, a1 <= c 라는 조건을 포함해서 코드를 작성해야 한다.
*/

#include <iostream>

using namespace std;

int main()
{
    int a1, a0, c, n0;
    cin >> a1 >> a0 >> c >> n0;

    int fn = a1 * n0 + a0;
    int gn = c * n0;

    if (fn <= gn && a1 <= c)
        cout << 1 << '\n';
    else
        cout << 0 << '\n';

    return 0;
}