/*
Sol 1) 각 자리수를 vector에 넣은 뒤 정렬
Sol 2) 문자열 sort
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Sol 1) 각 자리수를 vector<int>에 넣은 뒤 정렬
void sol_1()
{
    int n;
    cin >> n;
    vector<int> v;

    while (n > 0)
    {
        v.push_back(n % 10);
        n /= 10;
    }

    sort(v.begin(), v.end(), greater<int>());

    for (int i = 0; i < v.size(); i++)
        cout << v[i];
    cout << '\n';
}

// Sol 2) String sort
void sol_2()
{
    string num;
    cin >> num;

    sort(num.begin(), num.end(), greater<char>());

    cout << num << '\n';
}

int main()
{
    // sol_1();
    sol_2();

    return 0;
}