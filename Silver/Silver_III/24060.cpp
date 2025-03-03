#include <iostream>
#include <vector>

using namespace std;

int k, result = -1;
vector<int> tmp;

void merge(vector<int> &A, int p, int q, int r) {
  int i = p, j = q + 1, t = 0;

  while (i <= q && j <= r) tmp[t++] = (A[i] <= A[j]) ? A[i++] : A[j++];
  while (i <= q) tmp[t++] = A[i++];
  while (j <= r) tmp[t++] = A[j++];

  for (int idx = 0; idx < t; ++idx) {
    A[p + idx] = tmp[idx];
    if (--k == 0) result = A[p + idx];
  }
}

void merge_sort(vector<int> &A, int p, int r) {
  if (p < r && k > 0) {
    int q = (p + r) / 2;
    merge_sort(A, p, q);
    merge_sort(A, q + 1, r);
    merge(A, p, q, r);
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n >> k;

  vector<int> A(n);
  for (int &num : A) cin >> num;

  tmp.resize(n);
  merge_sort(A, 0, n - 1);

  cout << result << '\n';

  return 0;
}