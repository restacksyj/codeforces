#include <cctype>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  string f, s;
  cin >> f >> s;

  std::locale loc;
    for (char& c : f)
        c = std::tolower(c, loc);
    for (char& c : s)
        c = std::tolower(c, loc);

  int result = f.compare(s);

  if (result > 0) {
    cout << 1 << endl;
  } else if (result == 0) {
    cout << 0 << endl;
  } else if (result < 0) {
    cout << -1 << endl;
  }

  return 0;
}
