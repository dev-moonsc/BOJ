/*
두 수의 gcd를 사용하여 lcm을 구할 수 있다
*/

#include <iostream>
#include <numeric> // gcd()

using namespace std;

long lcm(int a, int b)
{
    return abs(a * b) / gcd(a, b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, a, b;
    cin >> t;

    while (t--)
    {
        cin >> a >> b;
        cout << lcm(a, b) << '\n';
    }

    return 0;
}