#include <iostream>
#include <unordered_map>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    unordered_map<int, string> umap1;
    unordered_map<string, int> umap2;
    int cnt = 1;

    string name;
    while (n--)
    {
        cin >> name;
        umap1.insert({cnt, name});
        umap2.insert({name, cnt});
        cnt++;
    }

    string tmp;
    while (m--)
    {
        cin >> tmp;
        if (all_of(tmp.begin(), tmp.end(), ::isdigit))
            cout << umap1[stoi(tmp)] << '\n';
        else
            cout << umap2[tmp] << '\n';
    }

    return 0;
}