/*
stable sort : 값이 같은 원소의 전후 관계가 바뀌지 않는 정렬 알고리즘
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool cmp(const pair<int, string> &a, const pair<int, string> &b)
{
    return a.first < b.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<pair<int, string>> users;
    pair<int, string> user;
    for (int i = 0; i < n; i++)
    {
        cin >> user.first >> user.second;
        users.push_back(user);
    }

    stable_sort(users.begin(), users.end(), cmp);

    for (int i = 0; i < n; i++)
        cout << users[i].first << ' ' << users[i].second << '\n';

    return 0;
}