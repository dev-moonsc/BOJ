/*
카운팅 정렬:
값의 범위가 제한된 경우 매우 빠르게 동작하는 정렬 알고리즘
각 값의 개수를 계산하고 그 정보를 사용하여 정렬된 배열을 생성한다.
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt[10001] = {0};

    int n, idx;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> idx;
        cnt[idx]++;
    }

    for (int i = 1; i < 10001; i++)
    {
        for (int j = 0; j < cnt[i]; j++)
            cout << i << '\n';
    }

    return 0;
}