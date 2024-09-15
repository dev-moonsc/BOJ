#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, e;
    cin >> n >> m;

    unordered_set<int> s;
    while (n--)
    {
        cin >> e;
        s.insert(e);
    }

    while (m--)
    {
        cin >> e;

        if (!s.erase(e))
            s.insert(e);
    }

    cout << s.size() << '\n';

    return 0;
}