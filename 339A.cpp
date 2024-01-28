#include <algorithm>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void solve() {
  string s;
  cin >> s;
  stringstream ss(s);

  string token;
  vector<int> numbers;
  while (getline(ss, token, '+')) {
    numbers.push_back(stoi(token));
  }

  sort(numbers.begin(), numbers.end());

  string output;

  for (int i = 0; i < numbers.size(); i++) {
    string temp = to_string(numbers[i]);
    if (i != numbers.size() - 1) {
      temp.push_back('+');
    }
    output += temp;
  }

  cout << output << endl;
}

int main() {
  solve();
  return 0;
}
