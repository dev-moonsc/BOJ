#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 1;
    for (int i = n; i > 1; i--)
        ans *= i;

    cout << ans << '\n';

    return 0;
}