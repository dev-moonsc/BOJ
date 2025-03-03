#include <iostream>

using namespace std;

void cantor(int n) {
  if (!n) {
    cout << '-';
    return;
  }

  int i = 1;
  for (int j = 0; j < n - 1; ++j) i *= 3;

  cantor(n - 1);
  cout << string(i, ' ');
  cantor(n - 1);
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);

  int N;
  while (cin >> N) {
    cantor(N);
    cout << '\n';
  }

  return 0;
}