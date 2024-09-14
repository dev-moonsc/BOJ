/*
unique():
연속으로 중복되는 원소를 vector의 제일 뒷부분으로 보낸다.
즉, 중복되지 않은 원소들 만을 앞에서부터 채운다.
그리고 중복되는 값이 시작하는 지점의 반복자를 반환한다.

반드시 정렬한 후에 사용해야 함.
erase()를 사용하여 중복이 제거된 vector를 얻을 수 있다.

lower_bound():
정렬된 범위에서 이진 탐색을 사용하여 주어진 값보다 같거나 큰 첫 번째 요소를 가리키는 반복자를 반환.

마찬가지로 정렬한 후에 사용해야 한다.
*/

#include <iostream>
#include <vector>
#include <algorithm> // sort(), unique()
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    // 원본 벡터 입력
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];

    // 압축할 벡터
    vector<int> v2(v1);
    sort(v2.begin(), v2.end());
    v2.erase(unique(v2.begin(), v2.end()), v2.end());

    // lower_bound로 압축한 벡터에서 인덱스 조회
    for (int i = 0; i < n; i++)
        cout << lower_bound(v2.begin(), v2.end(), v1[i]) - v2.begin() << ' ';
    cout << '\n';

    return 0;
}