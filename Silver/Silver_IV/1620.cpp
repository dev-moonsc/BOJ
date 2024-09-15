#include <iostream>
#include <unordered_map>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    string name[100001];
    unordered_map<string, int> num;
    int cnt = 1;

    string s;
    while (n--)
    {
        cin >> s;
        name[cnt] = s;
        num[s] = cnt;
        cnt++;
    }

    while (m--)
    {
        cin >> s;

        if (isdigit(s[0])) // 번호
            cout << name[stoi(s)] << '\n';
        else // 이름
            cout << num[s] << '\n';
    }

    return 0;
}