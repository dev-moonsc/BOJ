#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x;
    cin >> n;

    deque<int> qs;

    int t[100001];
    for (int i = 0; i < n; i++)
        cin >> t[i];

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (!t[i])
            qs.push_back(x);
    }

    int m;
    cin >> m;
    while (m--)
    {
        cin >> x;

        qs.push_front(x);
        cout << qs.back() << ' ';
        qs.pop_back();
    }

    cout << '\n';

    return 0;
}