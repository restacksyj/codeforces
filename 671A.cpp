#include <iostream>
using namespace std;

void solve() {
  int x;
  cin >> x;

  int out = x / 5;
  int r = x % 5;

  if (r != 0) {
    if (r % 1 == 0 || r % 2 == 0 || r % 3 == 0 || r % 4 == 0) {
      out += 1;
    }
  }

  cout << out << endl;
}

int main() {
  solve();
  return 0;
}
