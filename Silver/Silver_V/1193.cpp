#include <iostream>

using namespace std;

int main()
{
    int x, line = 1;
    cin >> x;

    while (x - line > 0)
    {
        x -= line;
        line++;
    }

    // odd line
    if (line % 2 == 1)
        cout << line - x + 1 << '/' << x << endl;
    // even line
    else
        cout << x << '/' << line - x + 1 << endl;

    return 0;
}