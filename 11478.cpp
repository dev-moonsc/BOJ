#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    unordered_set<string> uset;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 1; j <= s.length() - i; j++)
            uset.insert(s.substr(i, j));
    }

    cout << uset.size() << '\n';

    return 0;
}