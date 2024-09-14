#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int command, x;
    vector<int> stack;
    stack.reserve(n);

    while (n--)
    {
        cin >> command;

        switch (command)
        {
        // push
        case 1:
            cin >> x;
            stack.push_back(x);
            break;

        // pop
        case 2:
            if (stack.empty())
                cout << -1 << '\n';
            else
            {
                cout << stack.back() << '\n';
                stack.pop_back();
            }
            break;

        // size
        case 3:
            cout << stack.size() << '\n';
            break;

        // is_empty
        case 4:
            cout << stack.empty() << '\n';
            break;

        // top
        default:
            if (stack.empty())
                cout << -1 << '\n';
            else
                cout << stack.back() << '\n';
            break;
        }
    }

    return 0;
}
