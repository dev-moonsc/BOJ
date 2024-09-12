#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int cards[100];

    for (int i = 0; i < n; i++)
        cin >> cards[i];

    int max = 0;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int sum = cards[i] + cards[j] + cards[k];
                if (sum <= m && sum > max)
                    max = sum;

                if (max == m)
                {
                    cout << max << '\n';
                    return 0;
                }
            }
        }
    }

    cout << max << '\n';

    return 0;
}