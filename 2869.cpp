#include <iostream>

using namespace std;

int main()
{
    int a, b, v;
    cin >> a >> b >> v;

    int pre_end = v - a;
    int d = a - b;
    int day;

    if (pre_end % d == 0)
        day = pre_end / d + 1;
    else
        day = pre_end / d + 2;

    cout << day << endl;

    return 0;
}
