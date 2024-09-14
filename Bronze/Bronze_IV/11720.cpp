#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    int sum = 0;
    while (n--)
        sum += s[n] - '0';

    cout << sum;

    return 0;
}