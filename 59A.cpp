#include <cctype>
#include <iostream>
using namespace std;

void solve() {
  string s;
  cin >> s;

  int uC = 0;
  int lowerC = 0;

  for (char c : s) {
    if (c < 92) {
      uC++;
    } else {
      lowerC++;
    }
  }

  if (uC > lowerC) {
    for (char &c : s) {
      c = toupper(c);
    }
  } else {
    for (char &c : s) {
      c = tolower(c);
    }
  }
  cout << s << endl;
}

int main() {
  solve();
  return 0;
}
