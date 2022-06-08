#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    istringstream numStream(input);
    int num;

    vector<int> numbers;

    while (numStream >> num) {
        numbers.push_back(num);
    }

    sort(numbers.begin(), numbers.end());

    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i];
        if (i != numbers.size() - 1)
            cout << " <= ";
    }
    cout << endl;

    return 0;
}

