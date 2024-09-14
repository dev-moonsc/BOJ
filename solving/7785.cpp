#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    string name, action;
    unordered_map<string, int> m;
    vector<string> v;

    while (n--)
    {
        cin >> name >> action;

        m.insert({name, 0});

        if (action == "enter")
            m[name]++;
        else
            m[name]--;
    }

    for (const auto &p : m)
    {
        if (p.second)
            v.push_back(p.first);
    }

    sort(v.begin(), v.end(), greater<string>());

    for (string s : v)
        cout << s << '\n';

    return 0;
}