/*
소수 판별에 가장 유리한 코드 기억해둘 것
6k +- 1 패턴 / 에라토스테네스의 체 (특정 범위 내의 소수)
*/

#include <iostream>

using namespace std;

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

        if (n < 2)
            n = 2;
        else
            while (!is_prime(n))
                n++;

        cout << n << '\n';
    }

    return 0;
}