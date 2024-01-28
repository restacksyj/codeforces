#include <iostream>

using namespace std;

int main() {
  int tc;
  cin >> tc;

  while (tc--) {
    int n, k, m;
    string s;
    cin >> n >> k >> m;
    cin >> s;
    if (n * k == m) {
      cout << "YES";
    } else {
      cout << "NO";
    }
  }
  cout << "\n";

  return 0;
}
