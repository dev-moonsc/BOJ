/*
Sol 1) unordered_set
Sol 2) Binary search
*/

#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

// unordered_set
void sol_1()
{
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
    for (const auto &s : v)
        cout << s << '\n';
}

// Binary search
void sol_2()
{
    int n, m;
    cin >> n >> m;

    vector<string> v1;
    string name;
    for (int i = 0; i < n; i++)
    {
        cin >> name;
        v1.push_back(name);
    }

    sort(v1.begin(), v1.end());

    vector<string> v2;
    while (m--)
    {
        cin >> name;

        if (binary_search(v1.begin(), v1.end(), name))
            v2.push_back(name);
    }

    sort(v2.begin(), v2.end());

    cout << v2.size() << '\n';
    for (const auto &s : v2)
        cout << s << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // sol_1();
    sol_2();

    return 0;
}