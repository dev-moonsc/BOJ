#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    int n;
    cin >> n;

    queue<int> q;
    stack<int> s;

    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        q.push(input);
    }

    bool success = true;
    int current = 1;
    while (true)
    {
        // 둘다 비어있음
        if (q.empty() && s.empty())
            break;

        // 성공
        if (!q.empty() && q.front() == current)
        {
            q.pop();
            current++;
        }
        else if (!s.empty() && s.top() == current)
        {
            s.pop();
            current++;
        }

        // 실패
        else
        {
            if (q.empty())
            {
                success = false;
                break;
            }

            else
            {
                s.push(q.front());
                q.pop();
            }
        }
    }

    if (success)
        cout << "Nice" << '\n';
    else
        cout << "Sad" << '\n';

    return 0;
}