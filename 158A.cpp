#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;


int main(){
    string input;
    string input2;
    vector<int> numbers;
    getline (cin, input);
    getline (cin, input2);

    stringstream ss(input);
    stringstream ss2(input2);
    int num;

    while (ss >> num) {
        numbers.push_back(num);
    }

    int noOfPart = numbers[0];
    int kScore = numbers[1];

    numbers.clear();

    while ( ss2 >> num) {
        numbers.push_back(num);
    }

    int counter = 0;
    int actualScore = numbers[kScore-1];
    for (int i = 0; i < noOfPart ; i++){
        if ( numbers[i] != 0 && numbers[i] >= actualScore) {
            counter++;
        }
    }

    cout << counter << endl;

    return 0;
}
