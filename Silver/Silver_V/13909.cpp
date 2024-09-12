/*
마지막에 열려 있는 창문 == 번호의 약수가 홀수인 창문
약수가 홀수인 수 == 완전제곱수
1부터 n까지의 완전제곱수 == 1부터 n의 제곱근까지의 정수의 개수
*/

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
        cnt++;

    cout << cnt << '\n';

    return 0;
}