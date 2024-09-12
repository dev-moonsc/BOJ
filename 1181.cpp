#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

bool compare_str(const string &a, const string &b)
{

    if (a.length() == b.length())
    {
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] != b[i])
                return a[i] < b[i];
        }
    }

    return a.length() < b.length();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<string> v;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
    }

    set<string> unique(v.begin(), v.end());
    v.assign(unique.begin(), unique.end());

    sort(v.begin(), v.end(), compare_str);

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << '\n';

    return 0;
}