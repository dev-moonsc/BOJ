#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

long gcd_multiple(const vector<long> &numbers)
{
    long current_gcd = numbers[0];

    for (int i = 1; i < numbers.size(); ++i)
    {
        current_gcd = gcd(current_gcd, numbers[i]);
        if (current_gcd == 1)
            break;
    }

    return current_gcd;
}

int main()
{
    long n;
    cin >> n;

    vector<long> trees(n);
    vector<long> distance;
    long tree;

    cin >> tree;
    trees[0] = tree;
    for (int i = 1; i < n; i++)
    {
        cin >> tree;
        trees[i] = tree;
        distance.push_back(tree - trees[i - 1]);
    }

    long gcd = gcd_multiple(distance);

    long cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        while (trees[i] + gcd != trees[i + 1])
        {
            trees[i] += gcd;
            cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;
}