#include <iostream>
#define ll long long

using namespace std;

int main() {

  int tc;
  cin >> tc;

  while (tc--) {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
      for (char c = 'a'; c < 'a' + k; c++)
        cout << c;
    cout << '\n';

    return 0;
  }
}

// #include <iostream>
// using namespace std;
//
// int main() {
//   int tc;
//   cin >> tc;
//   while (tc--) {
//     int n, k;
//     cin >> n >> k;
//     for (int i = 0; i < n; i++)
//       for (char c = 'a'; c < 'a' + k; c++)
//         cout << c;
//     cout << '\n';
//   }
// }
