#include <iostream>

using namespace std;

int main()
{
    int n, x, i, cnt = 0;
    cin >> n;
    while (n--)
    {
        cin >> x;

        if (x == 1)
            continue;

        for (i = 2; i <= x / 2; i++)
        {
            if (x % i == 0)
                break;
        }

        if (i > (x / 2))
            cnt++;
    }

    cout << cnt << endl;

    return 0;
}