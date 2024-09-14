#include <iostream>

using namespace std;

int main()
{
    int n, x, y;
    int min_x = 10001, min_y = 10001, max_x = -10001, max_y = -10001;

    cin >> n;

    while (n--)
    {
        cin >> x >> y;

        if (min_x > x)
            min_x = x;
        if (max_x < x)
            max_x = x;
        if (min_y > y)
            min_y = y;
        if (max_y < y)
            max_y = y;
    }

    cout << (max_x - min_x) * (max_y - min_y) << '\n';

    return 0;
}