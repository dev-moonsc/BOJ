#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int tmp1, tmp2;
    tmp1 = min(x, y);
    tmp2 = min(w - x, h - y);

    cout << min(tmp1, tmp2) << '\n';

    return 0;
}