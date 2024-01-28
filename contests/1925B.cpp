#include <iostream>

using ll = long long;

using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  int ans = 1;

  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      int z1 = (n / i);
      if (z1 >= x) {
        ans = max(ans, i);
      }

      cout << i << " " << x << " " <<z1 << endl;
      if (i >= x) {
        cout << "I cam here " << endl;
        ans = max(ans, z1);
      }
    }
  }

  cout << ans << endl;
  return 0;
}
