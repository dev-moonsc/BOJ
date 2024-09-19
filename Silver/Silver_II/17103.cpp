#include <iostream>
#include <vector>
#define MAX 1000000

using namespace std;

// 에라토스테네스의 체
vector<bool> eratosthenes(int n)
{
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

    return v;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<bool> primes = eratosthenes(MAX);

    int t;
    cin >> t;

    int n;
    while (t--)
    {
        cin >> n;

        int cnt = 0;
        for (int i = 2; i <= n / 2; i++)
        {
            if (primes[i] && primes[n - i])
                cnt++;
        }

        cout << cnt << '\n';
    }
    return 0;
}