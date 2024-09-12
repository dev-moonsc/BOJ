#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 카운팅 정렬의 개념 이해

int main()
{
    // 입출력 성능 최적화
    ios::sync_with_stdio(false); // c스타일 표준 입출력과 동기화 해제
    cin.tie(NULL);               // cin과 cout의 tie를 해제하여 불필요한 flush 방지

    int n, idx;
    int cnt[10001] = {0};
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