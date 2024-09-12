#include <iostream>
#include <string>

using namespace std;

int main()
{
    int arr[26] = {0};
    int max = -1;
    char ans;
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        // 소문자 -> 대문자 변환
        if (s[i] >= 'a')
            s[i] = s[i] - 'a' + 'A';

        if (++arr[s[i] - 'A'] > max)
        {
            max = arr[s[i] - 'A'];
            ans = s[i];
        }
    }

    int cnt = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == max)
            cnt++;
    }

    if (cnt == 1)
        cout << ans;
    else
        cout << '?';

    return 0;
}