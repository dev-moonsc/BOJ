#include <iostream>

using namespace std;

int main()
{
    int n, k, cnt = 0;
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cnt++;
        if (cnt == k)
        {
            cout << i << endl;
            break;
        }
    }

    if (cnt < k)
        cout << '0' << endl;

    return 0;
}