#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];

    sort(arr, arr + 3);

    if (arr[2] >= arr[0] + arr[1])
        arr[2] = arr[0] + arr[1] - 1;

    cout << arr[0] + arr[1] + arr[2] << '\n';

    return 0;
}