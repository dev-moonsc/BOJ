#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[1001];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    cout << arr[n - k] << '\n';

    return 0;
}