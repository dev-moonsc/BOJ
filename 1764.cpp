#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    unordered_set<string> uset;
    string name;
    while (n--)
    {
        cin >> name;
        uset.insert(name);
    }

    vector<string> v;
    while (m--)
    {
        cin >> name;
        if (uset.find(name) != uset.end())
            v.push_back(name);
    }

    sort(v.begin(), v.end());

    cout << v.size() << '\n';
    for (const string &s : v)
        cout << s << '\n';

    return 0;
}