#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int gcd_multiple(const vector<int> &numbers)
{
    int curr = numbers[0];

    for (int i = 1; i < numbers.size(); i++)
    {
        curr = gcd(curr, numbers[i]);
        if (curr == 1)
            break;
    }

    return curr;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> trees(n);
    vector<int> distance(n - 1);
    int tree;

    cin >> trees[0];
    for (int i = 1; i < n; i++)
    {
        cin >> trees[i];
        distance[i - 1] = trees[i] - trees[i - 1];
    }

    int gcd = gcd_multiple(distance);

    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
        cnt += (distance[i] / gcd) - 1;

    cout << cnt << '\n';

    return 0;
}