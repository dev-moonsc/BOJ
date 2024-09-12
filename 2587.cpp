#include <iostream>

using namespace std;

void insertion_sort(int n, int arr[])
{
    int i, j, key;

    for (i = 1; i < n; i++)
    {
        key = arr[i];

        for (j = i - 1; j >= 0 && arr[j] > key; j--)
        {
            arr[j + 1] = arr[j];
        }

        arr[j + 1] = key;
    }
}

int average(int n, int arr[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum / n;
}

int main()
{

    int arr[5];
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    insertion_sort(5, arr);

    cout << average(5, arr) << endl
         << arr[2] << endl;

    return 0;
}