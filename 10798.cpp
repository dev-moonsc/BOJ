#include <iostream>

using namespace std;

int main()
{
    char arr[5][15] = {0};

    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[j][i] != 0)
                cout << arr[j][i];
        }
    }

    return 0;
}