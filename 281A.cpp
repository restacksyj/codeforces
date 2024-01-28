#include <cctype>
#include <iostream>
using namespace std;
#include <string>


void solve(){
    string s;
    cin >> s;
    s[0] = toupper(s[0]);
    cout << s << endl;;
}


int main(){
    solve();
    return 0;
}
