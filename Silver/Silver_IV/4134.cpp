/*
소수 판별 알고리즘
Sol 1) 6k +- 1 패턴
Sol 2) 에라토스테네스의 체 (특정 범위 내의 소수)

이 문제에서는 주어진 수보다 큰 소수를 찾아야 하므로, Sol 1을 사용하였다.
*/

#include <iostream>

using namespace std;

// 6k +- 1 패턴
bool is_prime(long n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (long i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    long n;
    while (t--)
    {
        cin >> n;

        while (!is_prime(n))
            n++;

        cout << n << '\n';
    }

    return 0;
}