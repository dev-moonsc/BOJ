#include <iostream>

using namespace std;

int main()
{
    int n, ans = 2;
    cin >> n;
    while (n--)
        ans = ans * 2 - 1;
    cout << ans * ans;

    return 0;
}