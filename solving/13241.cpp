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
    long a, b;
    cin >> a >> b;
    cout << lcm(a, b) << '\n';

    return 0;
}