#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<pair<int, string>> users;
    int age;
    string name;
    for (int i = 0; i < n; i++)
    {
        cin >> age >> name;
        users.push_back(make_pair(age, name));
    }

    // 람다 함수의 활용 : 외부에 비교 함수를 따로 정의해도 되지만, 람다식으로도 사용할 수 있다.
    stable_sort(users.begin(), users.end(), [](const pair<int, string> &a, const pair<int, string> &b)
                { return a.first < b.first; });

    for (int i = 0; i < n; i++)
        cout << users[i].first << ' ' << users[i].second << '\n';

    return 0;
}