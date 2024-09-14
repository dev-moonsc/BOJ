#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[3];
    string ans;

    while (true)
    {
        cin >> arr[0] >> arr[1] >> arr[2];

        if (!arr[0] && !arr[1] && !arr[2])
            break;

        sort(arr, arr + 3);

        if (arr[2] >= arr[0] + arr[1])
            ans = "Invalid";
        else if (arr[0] != arr[1] && arr[0] != arr[2] && arr[1] != arr[2])
            ans = "Scalene";
        else if (arr[0] == arr[1] && arr[0] == arr[2])
            ans = "Equilateral";
        else
            ans = "Isosceles";

        cout << ans << '\n';
    }

    return 0;
}