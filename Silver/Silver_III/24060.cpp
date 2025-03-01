#include <iostream>
#include <vector>

using namespace std;

int k, ans = -1;
vector<int> tmp;

void _merge(vector<int> &a, int p, int q, int r) {
  int i = p, j = q + 1, t = 0;

  while (i <= q && j <= r) tmp[t++] = (a[i] <= a[j]) ? a[i++] : a[j++];

  while (i <= q) tmp[t++] = a[i++];
  while (j <= r) tmp[t++] = a[j++];

  for (int idx = 0; idx < t; ++idx) {
    a[p + idx] = tmp[idx];
    if (--k == 0) ans = a[p + idx];
  }
}

void merge_sort(vector<int> &a, int p, int r) {
  if (p < r && k > 0) {
    int q = (p + r) / 2;
    merge_sort(a, p, q);
    merge_sort(a, q + 1, r);
    _merge(a, p, q, r);
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n >> k;

  vector<int> a(n);
  for (int &i : a) cin >> i;

  tmp.resize(n);
  merge_sort(a, 0, n - 1);

  cout << ans << '\n';
  return 0;
}