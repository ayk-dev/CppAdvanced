#include <iostream>
#include <set>
#include <string>
#include <sstream>
#include <utility>
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

    istringstream wordStream(input);
    string word;

    set<string> shortWords;

    while (wordStream >> word) {
        wordToLower(word);

        if (word.size() < 5)
            shortWords.insert(word);
    }

    for (auto i = shortWords.begin(); i != shortWords.end(); i++) {
        cout << *i << (i != --shortWords.end() ? ", " : " ");
    }
    cout << endl;
        
    return 0;
}

