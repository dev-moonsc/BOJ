#include <iostream>
#include <string>

using namespace std;

int main()
{
    int arr[6] = {1, 1, 2, 2, 2, 8};
    int a;

    for (int i = 0; i < 6; i++)
    {
        cin >> a;
        cout << arr[i] - a << ' ';
    }

    return 0;
}