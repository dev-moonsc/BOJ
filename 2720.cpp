#include <iostream>

using namespace std;

int main()
{
    int t, c;
    cin >> t;

    while (t--)
    {
        cin >> c;
        cout << c / 25 << ' ';
        c %= 25;
        cout << c / 10 << ' ';
        c %= 10;
        cout << c / 5 << ' ';
        c %= 5;
        cout << c / 1 << endl;
    }

    return 0;
}