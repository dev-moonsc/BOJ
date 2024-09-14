#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;

    while (true)
    {
        cin >> n;

        if (n == -1)
            break;

        int sum = 0;
        vector<int> divs;

        for (int i = 1; i <= n / 2; i++)
            if (n % i == 0)
            {
                divs.push_back(i);
                sum += i;
            }

        if (sum == n)
        {
            cout << n << " = 1";
            for (int i = 1; i < divs.size(); i++)
            {
                cout << " + " << divs[i];
            }
            cout << endl;
        }
        else
            cout << n << " is NOT perfect." << endl;
    }

    return 0;
}