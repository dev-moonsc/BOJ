#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, tmp;
    unordered_map<int, int> umap;

    cin >> n;
    while (n--)
    {
        cin >> tmp;
        umap[tmp]++;
    }

    cin >> m;
    while (m--)
    {
        cin >> tmp;
        cout << umap[tmp] << ' ';
    }
    cout << '\n';

    return 0;
}