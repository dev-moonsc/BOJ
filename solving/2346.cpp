// deque 회전의 이해

#include <iostream>
#include <deque>

using namespace std;

void rotation(deque<pair<int, int>> &dq, int steps)
{
    int n = dq.size();
    if (steps > 0)
    {
        steps = (steps - 1) % n;
        for (int i = 0; i < steps; i++)
        {
            dq.push_back(dq.front());
            dq.pop_front();
        }
    }
    else
    {
        steps = (-steps) % n;
        for (int i = 0; i < steps; i++)
        {
            dq.push_front(dq.back());
            dq.pop_back();
        }
    }
}

int main()
{
    int n, k;
    cin >> n;

    deque<pair<int, int>> dq;
    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        dq.push_back(make_pair(i, k));
    }

    while (!dq.empty())
    {
        cout << dq.front().first << ' ';
        int steps = dq.front().second;
        dq.pop_front();

        if (!dq.empty())
            rotation(dq, steps);
    }

    cout << '\n';

    return 0;
}