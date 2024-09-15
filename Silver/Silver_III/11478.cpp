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

    unordered_set<string> us;
    string str = "";
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i; j < s.size(); j++)
        {
            str += s[j];
            us.insert(str);
        }
        str = "";
    }

    cout << us.size() << '\n';

    return 0;
}