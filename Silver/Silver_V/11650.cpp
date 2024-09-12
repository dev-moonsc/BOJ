#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> points;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        points.push_back(make_pair(x, y));
    }

    sort(points.begin(), points.end());

    for (int i = 0; i < n; i++)
        cout << points[i].first << ' ' << points[i].second << '\n';

    return 0;
}