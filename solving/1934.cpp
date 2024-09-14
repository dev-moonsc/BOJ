/*
Sol 1: std::gcd
Sol 2: 유클리드 호제법
*/

#include <iostream>
#include <numeric>
#include <cstdlib>

using namespace std;

long lcm(int a, int b)
{
    return abs(a * b) / gcd(a, b);
}

int main()
{

    int t, a, b, min;
    cin >> t;

    while (t--)
    {
        cin >> a >> b;
        cout << lcm(a, b) << '\n';
    }

    return 0;
}