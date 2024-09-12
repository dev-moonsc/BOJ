#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, tmp;
    cin >> n >> m;

    unordered_set<int> s;
    while (n--)
    {
        cin >> tmp;
        s.insert(tmp);
    }

    while (m--)
    {
        cin >> tmp;

        if (!s.erase(tmp))
            s.insert(tmp);
    }

    cout << s.size() << '\n';

    return 0;
}