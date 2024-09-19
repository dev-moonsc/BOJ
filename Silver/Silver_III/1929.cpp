/*
에라토스테네스의 체
- 특정 범위 이하의 소수를 찾는 알고리즘
*/

#include <iostream>
#include <vector>

using namespace std;

// 에라토스테네스의 체
vector<int> eratosthenes(int n)
{
    vector<int> primes;
    vector<bool> v(n + 1, true);
    v[0] = v[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (v[i])
        {
            for (int j = i * i; j <= n; j += i)
                v[j] = false;
        }
    }

    for (int i = 0; i < n + 1; i++)
        if (v[i])
            primes.push_back(i);

    return primes;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int m, n;
    cin >> m >> n;

    vector<int> primes = eratosthenes(n);
    for (auto prime : primes)
        if (prime >= m)
            cout << prime << '\n';

    return 0;
}