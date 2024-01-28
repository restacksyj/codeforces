#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main(){

    int lines;
    cin >> lines;

    vector<string> words;

    for( int i = 0; i < lines; i++) {
        string word;
        cin >> word;

        if (word.length() > 10) {
            string out;
            out.push_back(word[0]);
            string remainign = to_string(word.length()-2);
            out += remainign;
            out.push_back(word[word.length()-1]);

            words.push_back(out);
        } else {
            words.push_back(word);
        }

    }

    for (int i = 0 ; i < words.size() ; i++) {
        cout << words[i] << endl;
    }

    return 0;
}
