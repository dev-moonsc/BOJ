#include <iostream>

using namespace std;

long fac(long n) {
  if (n > 1) return n * fac(n - 1);
  return 1;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  long n;
  cin >> n;
  cout << fac(n) << '\n';

  return 0;
}