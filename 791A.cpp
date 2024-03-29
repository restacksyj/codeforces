#include <iostream>
using namespace std;

void solve() {
  int a, b, out = 0;
  cin >> a >> b;

  while (b >= a) {
    a = a * 3;
    b = b * 2;
    out++;
  }

  cout << out << endl;
}

int main() {
  solve();
  return 0;
}
