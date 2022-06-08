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
    double num;

    vector<double> numbers;

    while (numStream >> num) {
        numbers.push_back(num);
    }

    sort(numbers.begin(), numbers.end(), greater<double>());
    int i;
    if (numbers.size() <= 3) {
        for (i = 0; i < numbers.size(); i++)
            cout << numbers[i] << " ";
    }
    else {
        for (i = 0; i < 3; i++)
            cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}

