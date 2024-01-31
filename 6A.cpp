#include <iostream>

using namespace std;

void solve() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  // a + b > c - TRIANGLE
  // a + b = c - SEGMENT
  // IMPOSSIBLE

  // abc bcd cda dab

  if ((a < b + c && b < a + c && c < a + b) ||
      (b < c + d && c < b + d && d < c + b) ||
      (c < a + d && d < a + c && a < c + d) ||
      (d < a + b && a < b + d && b < d + a)) {
    cout << "TRIANGLE" << endl;
    return;
  }

  if (a == b + c || a == c + d || a == b + d || b == a + c || b == a + d ||
      b == c + d || c == a + b || c == a + d || c == b + d || d == a + b ||
      d == b + c || d == a + c) {
    cout << "SEGMENT" << endl;
    return;
  }

  cout << "IMPOSSIBLE" << endl;
  return;
}

int main() {
  solve();
  return 0;
}
