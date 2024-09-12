#include <iostream>
#define MAX 1000

using namespace std;

void selection_sort(int n, int arr[])
{
}

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

void bubble_sort(int n, int arr[])
{
}
void heap_sort(int n, int arr[])
{
}
void merge_sort(int n, int arr[])
{
}
void quick_sort(int n, int arr[])
{
}

int main()
{
    int n;
    cin >> n;

    int arr[1000];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    insertion_sort(n, arr);

    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;

    return 0;
}