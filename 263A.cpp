#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
  int output;
  int n = 0;
  int col;
  int row;
  
  while (n < 5) {
    string input;
    getline(cin, input);
    stringstream ss(input);
    int num;

    int idx = 0;
    while (ss >> num) {
      idx++;
      if (num == 1) {
          row = n;
          col = idx-1;
      }
    }
    n++;
  }

  int desiredR = 2;
  int desiredC = 2;

  if (desiredR > row) {
    output = desiredR - row;
  } else {
    output = row - desiredR;
  }

  if (desiredC > col) {
    output += desiredC - col;
  } else {
    output += col - desiredC;
  }

  cout << output << endl;
  return 0;
}
