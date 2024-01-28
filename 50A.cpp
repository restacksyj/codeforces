#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>

using namespace std;


int main(){
    string input;
    getline (cin, input);

    stringstream ss(input);
    int num;
    vector<int> numbers;

    while (ss >> num ) {
         numbers.push_back(num);
    }

    int m = numbers[0];
    int n = numbers[1];


    int recArea = m * n;
    int sqA = 2;

    cout << floor(recArea / sqA) << endl;
    
    return 0;
}
