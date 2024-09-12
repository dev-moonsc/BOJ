/*
수행 횟수 : 1부터 n - 1 까지의 합
수행 시간 : n^2

n이 7인 경우를 예시로 살펴보면,

i = 1일 때,
j = 2 ~ 7 -> 6회

i = 2일 때,
j = 3 ~ 7 -> 5회

...

i = 6일 때,
j = 7 -> 1회

즉, 수행 횟수는 1부터 n - 1 까지의 합임을 알 수 있다.
이를 식으로 나타내면, n * (n - 1) / 2 이므로, 최고차항의 차수는 2이다.
또한 이 문제에서도 마찬가지로, n의 max가 500,000 이므로 long을 사용해야 한다.
*/

#include <iostream>

using namespace std;

int main()
{
    long n;
    cin >> n;

    cout << n * (n - 1) / 2 << '\n'
         << 2 << '\n';

    return 0;
}