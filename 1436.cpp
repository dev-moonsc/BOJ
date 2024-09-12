#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int current = 666;
    while (n)
    {
        string s = to_string(current);

        for (int i = 0; i < s.length() - 2; i++)
        {
            if (s[i] == '6' && s[i + 1] == '6' && s[i + 2] == '6')
            {
                n--;
                break;
            }
        }

        current++;
    }

    cout << current - 1 << '\n';

    return 0;
}