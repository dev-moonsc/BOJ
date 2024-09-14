#include <iostream>
#include <numeric>
#include <cstdlib>

using namespace std;

long lcm(long a, long b)
{
    return abs(a * b) / gcd(a, b);
}

int main()
{
    long a1, a2, b1, b2, a, b, g;
    cin >> a1 >> b1 >> a2 >> b2;

    a = a1 * b2 + a2 * b1;
    b = b1 * b2;

    g = gcd(a, b);
    a /= g;
    b /= g;

    cout << a << ' ' << b << '\n';

    return 0;
}