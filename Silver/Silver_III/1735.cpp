/*
macOS에서는 long과 long long의 크기와 범위가 동일하지만, 의미적으로 동일하지는 않습니다.
long long은 항상 64비트를 보장하기 때문에, 다른 아키텍처나 플랫폼에서의 이식성을 고려해야 합니다.
만약 이식성을 고려하지 않고, 단순히 macOS 환경에서 사용할 코드를 작성하는 경우라면, long을 사용해도 무방합니다.
하지만, 이식성과 표준 준수를 고려하여 long long을 사용하는 것이 더 바람직합니다.
*/

#include <iostream>
#include <numeric>

using namespace std;

int main()
{
    long long a1, a2, b1, b2;
    cin >> a1 >> b1 >> a2 >> b2;

    long long a = a1 * b2 + a2 * b1;
    long long b = b1 * b2;

    long long g = gcd(a, b);
    a /= g;
    b /= g;

    cout << a << ' ' << b << '\n';

    return 0;
}