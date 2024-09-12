#include <iostream>

using namespace std;

// 내림차순 정렬
void insertion_sort(int n, int arr[])
{
    int i, j, key;

    for (i = 1; i < n; i++)
    {
        key = arr[i];

        for (j = i - 1; j >= 0 && arr[j] < key; j--)
        {
            arr[j + 1] = arr[j];
        }

        arr[j + 1] = key;
    }
}

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[1000];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    insertion_sort(n, arr);

    cout << arr[k - 1] << endl;

    return 0;
}