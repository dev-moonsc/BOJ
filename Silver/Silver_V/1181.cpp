#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

bool cmp(const string &a, const string &b)
{
    // 길이가 같다면, 사전 순으로
    if (a.length() == b.length())
        // string 끼리의 비교 연산자는 사전 순으로 비교
        return a < b;

    // 길이가 다르다면, 짧은 순으로
    return a.length() < b.length();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    set<string> unique(v.begin(), v.end());
    v.assign(unique.begin(), unique.end());

    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << '\n';

    return 0;
}