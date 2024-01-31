#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void solve() {

  int n;
  cin >> n;
  string s;
  cin >> s;

  unordered_map<char, int> a;
  unordered_map<char, int> b;

  int aStart = 0;
  int found = -1;
  while (aStart < n) {

    if (s[aStart] == 'L') {
      a['L'] += 1;
    } else {
      a['O'] += 1;
    }

    for (int i = aStart + 1; i < n; i++) {
      if (s[i] == 'L') {
        b['L'] += 1;
      } else {
        b['O'] += 1;
      }
    }

    if ((a['L'] > 0 || a['O'] > 0) && (b['L'] > 0 || b['O'] > 0)) {
      if (a['L'] != b['L'] && a['O'] != b['O']) {
        found = aStart;
        break;
      }
    }

    aStart++;
    b.clear();
  }

  if (found != -1) {
    cout << found + 1 << endl;
  } else {
    cout << found << endl;
  }
}

int main() {
  solve();
  return 0;
}
