/*
수행 횟수 : (1부터 1까지의 합) + (1부터 2까지의 합) + ... + (1부터 n - 2까지의 합)
수행 시간 : n^3

n = 7인 경우를 예시로 살펴보면,

i = 1
j = 2
k = 3 ~ 7 -> 5회

i = 1
j = 3
k = 4 ~ 7 -> 4회

...

i = 1
j = 6
k = 7 -> 1회

i = 2
j = 3
k = 4 ~ 7 -> 4회

i = 2
j = 4
k = 5 ~ 7 -> 3회

...

i = 2
j = 6
k = 7 -> 1회

...

i = 5
j = 6
k = 7 -> 1회


수행 횟수는 (1부터 1까지의 합) + (1부터 2까지의 합) + ... + (1부터 n - 2까지의 합)
즉, 시그마 {i = 1 ~ (n - 2)} 시그마 {j = 1 ~ i} j의 합임을 알 수 있다.
이를 식으로 나타내면 ((n - 2) * (n - 1) * n) / 6 이므로, 최고차항의 차수는 3이다.
또한 이 문제에서도 마찬가지로 long을 사용해야 함에 유의하자.
*/

#include <iostream>

using namespace std;

int main()
{
    long n;
    cin >> n;

    cout << ((n - 2) * (n - 1) * n) / 6 << '\n'
         << 3 << '\n';

    return 0;
}