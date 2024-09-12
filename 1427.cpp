#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
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
    cout << endl;

    return 0;
}

// 다른 풀이 : 문자열 정렬
// #include <iostream>
// #include <algorithm>

// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(0), cin.tie(0);
//     string num;
//     cin >> num;
//     sort(num.begin(), num.end(), greater<char>());
//     cout << num;
//     return 0;
// }