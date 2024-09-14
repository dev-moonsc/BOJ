#include <iostream>
#include <vector>

using namespace std;

bool is_prime(int n);

int main()
{
    int m, n, sum = 0;
    vector<int> prime;

    cin >> m >> n;

    for (int i = m; i <= n; i++)
    {
        if (is_prime(i))
        {
            prime.push_back(i);
            sum += i;
        }
    }

    if (!sum)
        cout << -1 << endl;
    else
        cout << sum << endl
             << prime[0] << endl;

    return 0;
}

bool is_prime(int n)
{
    if (n == 1)
        return false;
    if (n == 2)
        return true;

    bool result = true;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            result = false;
            break;
        }
    }

    return result;
}