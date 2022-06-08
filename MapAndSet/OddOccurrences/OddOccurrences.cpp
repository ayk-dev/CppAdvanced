#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

void wordToLower(string& word) {
    for (int i = 0; i < word.size(); i++) {
        word[i] = tolower(word[i]);
    }
}

int main()
{
    string input;
    getline(cin, input);

    vector<string> wordsOrder;
    map<string, int> wordsCounts;

    istringstream inputStream(input);
    string word;

    while (inputStream >> word) {
        wordToLower(word);
        
        vector<string>::iterator itWord = find(wordsOrder.begin(), wordsOrder.end(), word);
        if (itWord == wordsOrder.end()) {
            wordsOrder.push_back(word);
        }

        wordsCounts[word]++;
    }

    for (string w : wordsOrder) {
        if (wordsCounts[w] % 2 != 0) {
            cout << w;
            vector<string>::iterator itW = find(wordsOrder.begin(), wordsOrder.end(), w);
            int index = itW - wordsOrder.begin();
            if (index != wordsOrder.size() - 1) {
                cout << ", ";
            }
        }
    }
    cout << endl;
   
    return 0;
}

