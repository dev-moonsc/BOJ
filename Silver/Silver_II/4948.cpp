/*
해당 문제는 주어진 범위 내에서 여러 개의 테스트 케이스를 실행하므로,
미리 최대 범위의 에라토스테네스 체를 생성해 두는 것이 유리하다.
*/

#include <iostream>
#include <algorithm>
#define MAX (123456 * 2 + 1)

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 에라토스테네스의 체 만들기
    bool arr[MAX];
    fill(arr, arr + MAX, true);
    arr[0] = arr[1] = false;
    for (int i = 2; i * i <= MAX; i++)
    {
        if (arr[i])
        {
            for (int j = i * i; j <= MAX; j += i)
                arr[j] = false;
        }
    }

    int n;
    cin >> n;
    while (n)
    {
        int cnt = 0;
        for (int i = n + 1; i <= n * 2; i++)
        {
            if (arr[i])
                cnt++;
        }

        cout << cnt << '\n';

        cin >> n;
    }

    return 0;
}