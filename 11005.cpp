#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, b;
    cin >> n >> b;
    string ans;

    while (n > 0)
    {
        int r = n % b;

        if (r > 9)
            ans = (char)(r - 10 + 'A') + ans;
        else
            ans = (char)(r + '0') + ans;

        n /= b;
    }

    cout << ans;

    return 0;
}