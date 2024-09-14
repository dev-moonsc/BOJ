/*
수행 횟수 : n^2회
수행 시간 : n^2
단, n의 max가 500,000이므로 이의 제곱을 고려하여 long을 사용할 것.
*/

#include <iostream>

using namespace std;

int main()
{
    long n;
    cin >> n;

    cout << n * n << '\n'
         << 2 << '\n';

    return 0;
}