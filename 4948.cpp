#include <iostream>
#include <vector>

using namespace std;

// bool is_prime(int n)
// {
//     if (n <= 1)
//         return false;
//     if (n <= 3)
//         return true;
//     if (n % 2 == 0 || n % 3 == 0)
//         return false;

//     for (int i = 5; i * i <= n; i += 6)
//     {
//         if (n % i == 0 || n % (i + 2) == 0)
//             return false;
//     }

//     return true;
// }

// 에라토스테네스의 체
vector<int> eratosthenes(int n)
{
    vector<int> result;

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

    for (int i = 0; i < n + 1; i++)
    {
        if (sieve[i])
            result.push_back(i);
    }

    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, cnt;
    while (true)
    {
        cin >> n;

        if (!n)
            break;

        cnt = 0;
        vector<int> primes = eratosthenes(2 * n);

        for (int i = 0; i < primes.size(); i++)
        {
            if (primes[i] > n)
                cnt++;
        }

        cout << cnt << '\n';
    }

    return 0;
}