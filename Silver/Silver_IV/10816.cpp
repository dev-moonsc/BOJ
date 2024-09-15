/*
Sol 1) Hashmap
Sol 2) Binary search

왜 시간 복잡도가 더 작은 HashMap이 더 오래 걸릴까?

현실 세계에서는 N이 무한히 큰 경우가 거의 없기 때문에
O(lgN)과 O(1) 정도의 차이는 N의 크기에 따라 시간 복잡도에 붙은 상수로 자주 뒤집어집니다.
가령, 최소한의 비교로 원하는 수를 찾아야 하는 가상의 문제가 있다고 합시다.
N에 관계없이 항상 50번의 비교로 수를 찾는 어떤 O(1) 알고리즘과
N에 대해 ceil(lgN) 번의 비교를 하는 O(lgN) 알고리즘이 있으면,
복잡도만 봤을 때는 O(1)이 나음에도 불구하고, N이 조 단위를 넘어가지 않는 이상
O(lgN)이 O(1) 보다도 빠릅니다.
이런 상황은 심지어 O(N)과 O(N^2)같이 시간 복잡도가 크게 차이나는 경우에도 자주 일어납니다.

출처 : www.acmicpc.net/board/view/57406
*/

#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

// Sol 1) Hashmap
void sol_1()
{
    int n, m, card;
    unordered_map<int, int> umap;

    cin >> n;
    while (n--)
    {
        cin >> card;
        umap[card]++;
    }

    cin >> m;
    while (m--)
    {
        cin >> card;
        cout << umap[card] << ' ';
    }
    cout << '\n';
}

// Sol 2) Binary search
void sol_2()
{
    int n, m, card;
    int arr[500001];

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    cin >> m;
    while (m--)
    {
        cin >> card;
        cout << upper_bound(arr, arr + n, card) - lower_bound(arr, arr + n, card) << ' ';
    }
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // sol_1();
    sol_2();

    return 0;
}