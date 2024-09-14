#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int ans = 0, i = 0;

    while (i < s.length())
    {
        if (s[i] == 'c')
        {
            if (s[i + 1] == '=')
                i++;
            else if (s[i + 1] == '-')
                i++;
        }
        if (s[i] == 'd')
        {
            if (s[i + 1] == 'z' && s[i + 2] == '=')
                i += 2;
            else if (s[i + 1] == '-')
                i++;
        }

        if (s[i] == 'l' && s[i + 1] == 'j')
            i++;

        if (s[i] == 'n' && s[i + 1] == 'j')
            i++;

        if (s[i] == 's' && s[i + 1] == '=')
            i++;

        if (s[i] == 'z' && s[i + 1] == '=')
            i++;

        i++;
        ans++;
    }

    cout << ans;

    return 0;
}