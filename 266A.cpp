#include <iostream>
using namespace std;
#include <string>


void solve(){
    int stones;
    cin >> stones;
    string s;
    cin >> s;
    
    int counter = 0;

    for(int i = 0; i < s.length(); i++){
        if (i != 0) {
           if (s[i-1] == s[i]) {
              counter++;
           }
        }
    }

    cout << counter << endl;


}


int main(){
    solve();
    return 0;
}


