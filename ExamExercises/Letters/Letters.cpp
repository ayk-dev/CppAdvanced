#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

void readInput(vector<string>& words) {
    string input;
    getline(cin, input);

    stringstream ss(input);
    string word;

    while (ss >> word) {
        word.erase(remove(word.begin(), word.end(), ','), word.end());
        word.erase(remove(word.begin(), word.end(), '.'), word.end());
        word.erase(remove(word.begin(), word.end(), '!'), word.end());
        word.erase(remove(word.begin(), word.end(), '?'), word.end());
        words.push_back(word);
    }
}

string convertToLower(string word) {
    for (string::iterator itW = word.begin(); itW != word.end(); itW++)
        *itW = tolower(*itW);
    return word;
}

void printFoundWords(const set<string>& mySet) {
    for (const string word : mySet)
        cout << word << " ";
    cout << endl;
}

int main()
{
    vector<string> words;
    readInput(words);

    while (true) {
        char letter;
        cin >> letter;
        if (letter == '.')
            break;

        set<string> foundWords;
        for (string w : words) {
            string wToLower = convertToLower(w);
            size_t position = wToLower.find(tolower(letter));
            if (position != string::npos)
                foundWords.insert(w);
        }
       
        if (foundWords.empty())
            cout << "---" << endl;
        else
            printFoundWords(foundWords);
    }

    return 0;
}