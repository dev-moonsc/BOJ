#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    string tmp;
    unordered_set<string> s;

    cin >> n >> m;

    while (n--)
    {
        cin >> tmp;
        s.insert(tmp);
    }

    int cnt = 0;
    while (m--)
    {
        cin >> tmp;
        if (s.find(tmp) != s.end())
            cnt++;
    }

    cout << cnt << '\n';

    return 0;
}