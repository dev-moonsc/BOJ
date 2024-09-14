#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0;

    while (n--)
    {
        string s;
        cin >> s;

        bool used[26] = {false};
        used[s[0] - 'a'] = true;

        bool flag = true;

        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] == s[i - 1])
                continue;
            if (used[s[i] - 'a'])
            {
                flag = false;
                break;
            }

            used[s[i] - 'a'] = true;
        }

        if (flag)
            ans++;
    }

    cout << ans;

    return 0;
}