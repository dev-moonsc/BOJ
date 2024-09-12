#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, tmp;
    unordered_set<int> s;

    cin >> n;
    while (n--)
    {
        cin >> tmp;
        s.insert(tmp);
    }
    cin >> m;
    while (m--)
    {
        cin >> tmp;
        if (s.find(tmp) == s.end())
            cout << 0 << ' ';
        else
            cout << 1 << ' ';
    }
    cout << '\n';

    return 0;
}