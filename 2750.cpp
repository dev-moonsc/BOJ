#include <iostream>
#include <algorithm>
#define MAX 1000

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[MAX];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << '\n';

    return 0;
}