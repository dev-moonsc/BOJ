/*

최빈값이 여러 개 존재할 경우, 두 번 째로 작은 값을 출력해야 함에 유의.
배열에 빈도수를 저장하고 배열 순회를 통해 최빈값을 결정한다.

*/

#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  vector<int> nums(n);
  double sum = 0;
  int freqs[8001] = {};

  for (int &num : nums) {
    cin >> num;
    sum += num;
    freqs[num + 4000]++;
  }

  sort(nums.begin(), nums.end());

  int avg = round(sum / n);
  int mid = nums[n / 2];
  int range = nums.back() - nums.front();

  int mode, maxFreq = 0, modeCnt = 0;
  for (int i = 0; i < 8001; i++) {
    if (freqs[i] > maxFreq) {
      maxFreq = freqs[i];
      mode = i - 4000;
      modeCnt = 1;
    } else if (freqs[i] == maxFreq && modeCnt == 1) {
      mode = i - 4000;
      modeCnt++;
    }
  }

  cout << avg << '\n' << mid << '\n' << mode << '\n' << range << '\n';

  return 0;
}