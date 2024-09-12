#include <iostream>

using namespace std;

int main()
{
    int arr[100][100] = {0};
    int n, x, y, ans = 0;
    cin >> n;

    while (n--)
    {
        cin >> x >> y;

        for (int i = y; i < y + 10; i++)
        {
            for (int j = x; j < x + 10; j++)
            {
                if (arr[i][j] == 0)
                {
                    ans++;
                    arr[i][j] = 1;
                }
            }
        }
    }

    cout << ans;

    return 0;
}