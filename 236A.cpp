#include <iostream>
using namespace std;
#include <string>
#include <set>


void solve(){
    string s;
    cin >> s;

    set<char> c;

    for(char x:s){
        c.insert(x);
    }

    if (c.size() % 2 == 0) {
       cout << "CHAT WITH HER!" << endl;
    } else {
       cout << "IGNORE HIM!" << endl;
    }
}


int main(){
    solve();
    return 0;
}

