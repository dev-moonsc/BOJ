#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> v1(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];

    vector<int> v2 = v1;
    sort(v2.begin(), v2.end());
    v2.erase(unique(v2.begin(), v2.end()), v2.end());

    unordered_map<int, int> index_map;
    for (int i = 0; i < v2.size(); i++)
        index_map[v2[i]] = i;
    for (int i = 0; i < n; i++)
    {
        v1[i] = index_map[v1[i]];
        cout << v1[i] << ' ';
    }

    cout << '\n';

    return 0;
}