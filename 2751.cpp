#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, tmp;
    vector<int> v;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
        cout << v[i] << '\n'; // endl은 버퍼를 비우는 동작이 있어 running time이 늘어날 수 있다.

    return 0;
}