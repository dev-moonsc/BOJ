#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

// 에라토스테네스의 체
vector<bool> eratosthenes(int n)
{
    vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (sieve[i])
        {
            for (int j = i * i; j <= n; j += i)
                sieve[j] = false;
        }
    }

    return sieve;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<bool> primes = eratosthenes(1000001);

    int t;
    cin >> t;

    int n, cnt;
    while (t--)
    {
        cin >> n;

        cnt = 0;
        for (int i = 2; i <= n / 2; i++)
        {
            if (primes[i] && primes[n - i])
                cnt++;
        }

        cout << cnt << '\n';
    }
    return 0;
}