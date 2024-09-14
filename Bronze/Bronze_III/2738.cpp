#include <iostream>

using namespace std;

int main()
{
    int m1[101][101], m2[101][101];

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> m1[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> m2[i][j];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << m1[i][j] + m2[i][j] << ' ';
        cout << endl;
    }

    return 0;
}