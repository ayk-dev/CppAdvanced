#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <iterator>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    map<string, int> realNumbers;

    istringstream numbersStream(input);
    string number;

    while (numbersStream >> number) {
        realNumbers[number]++;
    }

    for (pair<string, int> number : realNumbers) {
        cout << number.first << " -> " << number.second << endl;
    }

    return 0;
}
