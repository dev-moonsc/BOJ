#include <iostream>
#include <numeric> // gcd()

using namespace std;

long lcm(long a, long b)
{
    return abs(a * b) / gcd(a, b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long a, b;
    cin >> a >> b;
    cout << lcm(a, b) << '\n';

    return 0;
}