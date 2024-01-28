#include <iostream>
#include <string>

using namespace std;

int main(){
    int x = 0;
    int n;
    cin >> n;

    while(n!=0){
        string line;
        cin >> line;
        if (line.find('+') != string::npos) {
            x++;
        } else {
            x--;
        }
        n--;
    }

    cout << x << endl;

    return 0;
}


