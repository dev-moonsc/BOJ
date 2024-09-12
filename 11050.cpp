#include <iostream>

using namespace std;

int fac(int n)
{
    int ans = 1;
    for (int i = n; i > 1; i--)
        ans *= i;

    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << fac(n) / (fac(k) * fac(n - k)) << '\n';

    return 0;
}