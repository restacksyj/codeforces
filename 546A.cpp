#include <iostream>
using namespace std;

void solve() {
    int k,n,w;
    cin >> k >> n >> w;

    int totalD = 0;

    for(int i = 1; i <= w; i++){
        totalD += i*k;
    }

    int out=0;

    if (n < totalD) {
       out = totalD - n;
    }

    cout << out << endl;


}

int main() {
  solve();
  return 0;
}
