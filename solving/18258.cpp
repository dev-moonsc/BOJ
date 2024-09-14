#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    string command;
    int x;
    deque<int> queue;

    while (n--)
    {
        cin >> command;

        if (command == "push")
        {
            cin >> x;
            queue.push_back(x);
        }

        else if (command == "pop")
        {
            if (queue.empty())
                cout << -1 << '\n';
            else
            {
                cout << queue.front() << '\n';
                queue.pop_front();
            }
        }

        else if (command == "size")
            cout << queue.size() << '\n';

        else if (command == "empty")
            cout << queue.empty() << '\n';

        else if (command == "front")
        {
            if (queue.empty())
                cout << -1 << '\n';
            else
                cout << queue.front() << '\n';
        }

        else
        {
            if (queue.empty())
                cout << -1 << '\n';
            else
                cout << queue.back() << '\n';
        }
    }

    return 0;
}