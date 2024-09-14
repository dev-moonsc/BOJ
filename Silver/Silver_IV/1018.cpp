#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// set solution board
string WB[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
};
string BW[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
};

string board[50];

int WB_cnt(int x, int y)
{
    int cnt = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (WB[i][j] != board[x + i][y + j])
                cnt++;
        }
    }

    return cnt;
}

int BW_cnt(int x, int y)
{
    int cnt = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (BW[i][j] != board[x + i][y + j])
                cnt++;
        }
    }

    return cnt;
}

int main()
{
    int n, m;
    cin >> n >> m;

    // input board
    for (int i = 0; i < n; i++)
        cin >> board[i];

    int ans = 65;
    for (int i = 0; i < n - 7; i++)
    {
        for (int j = 0; j < m - 7; j++)
        {
            int current = min(WB_cnt(i, j), BW_cnt(i, j));

            if (current < ans)
                ans = current;

            if (!ans)
            {
                cout << ans << '\n';

                return 0;
            }
        }
    }

    cout << ans << '\n';

    return 0;
}