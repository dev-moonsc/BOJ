#include <iostream>

using namespace std;

int main()
{
    int n, c = 1, d = 1;
    cin >> n;

    while (c < n)
        c += 6 * d++;

    cout << d;

    return 0;
}