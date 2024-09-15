#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    string name, action;
    map<string, bool, greater<string>> m;

    while (n--)
    {
        cin >> name >> action;

        if (action == "enter")
            m[name] = true;
        else
            m[name] = false;
    }

    for (const auto &p : m)
        if (p.second)
            cout << p.first << '\n';

    return 0;
}