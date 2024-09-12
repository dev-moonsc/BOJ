#include <iostream>

using namespace std;

int main()
{
    string subject, grade;
    double credit;

    double credit_sum = 0.0;
    double ans = 0.0;
    double tmp;

    for (int i = 0; i < 20; i++)
    {
        cin >> subject >> credit >> grade;

        if (grade == "P")
            continue;

        credit_sum += credit;

        if (grade == "F")
            continue;

        if (grade[0] == 'A')
            tmp = 4;
        else if (grade[0] == 'B')
            tmp = 3;
        else if (grade[0] == 'C')
            tmp = 2;
        else
            tmp = 1;

        if (grade[1] == '+')
            tmp += 0.5;

        ans += credit * tmp;
    }

    cout << ans / credit_sum;

    return 0;
}