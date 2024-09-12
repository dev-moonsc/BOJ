/*
수행 횟수 : n * n * n회
수행 시간 : n^3
이 문제에서도 마찬가지로 long을 사용해야 한다.
*/

#include <iostream>

using namespace std;

int main()
{
    long n;
    cin >> n;

    cout << n * n * n << '\n'
         << 3 << '\n';

    return 0;
}