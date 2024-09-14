/*
Sol 1 : Greedy algorithm (탐욕법)
Sol 2 : Dynamic programming (동적 계획법)

알고리즘 기법 : 정렬 알고리즘, 검색 알고리즘, ...
알고리즘 설계 기법 : 분할 정복, 동적 계획법, 탐욕법, 백트래킹, ...

탐욕법과 동적 계획법은 "알고리즘 설계 기법"에 해당

탐욕법 : 매 단계에서 가장 최적이라고 생각되는 선택을 하는 방식
- 국소 최적 선택(Local Optimal Choice)
- 빠르고 간단
- 최적해를 보장하지는 않는다

동적 계획법 : 문제를 작은 부분 문제로 나누어 푸는 방식
- 재귀적 관계(점화식) 이용
- 부분 문제의 최적해 이용
- 메모이제이션(재사용) 기법 사용 : 중복 계산을 피함
*/

#include <iostream>
#include <algorithm>

#define MAX 5000

using namespace std;

// Sol 1 : Greedy algorithm
int greedy(int n)
{
    int ans = 0;

    while (n >= 0)
    {
        if (n % 5 == 0)
        {
            ans += n / 5;
            break;
        }

        n -= 3;
        ans++;
    }

    if (n < 0)
        ans = -1;

    return ans;
}

// Sol 2 : Dynamic programming
int dp(int n)
{
    // 기본값은 -1
    int ans = -1;

    // 메모이제이션 : 0으로 초기화
    int d[MAX + 1] = {0};

    // 3과 5를 만드는 경우의 수는 1
    d[3] = d[5] = 1;

    // 3과 5 다음인 6부터 순회
    for (int i = 6; i <= n; i++)
    {
        // d[i - 3]을 기준으로 업데이트
        if (d[i - 3])
            d[i] = d[i - 3] + 1;

        // d[i - 5]를 기준으로 업데이트
        if (d[i - 5])
        {
            // 이미 업데이트 된 경우 둘 중 최솟값으로 업데이트
            if (d[i])
                d[i] = min(d[i], d[i - 5] + 1);
            // 아직 업데이트 되지 않은 경우
            else
                d[i] = d[i - 5] + 1;
        }
    }

    // n을 만들 수 있는지 확인
    if (d[n])
        ans = d[n];

    return ans;
}

int main()
{
    int n;
    cin >> n;

    // cout << greedy(n) << '\n';
    cout << dp(n) << '\n';

    return 0;
}