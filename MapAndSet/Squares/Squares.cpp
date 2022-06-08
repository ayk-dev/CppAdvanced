#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <utility>
#include <cmath>

using namespace std;

bool isSquare(int& num) {
    if (num < 0)
        return false;

    int sqRoot = sqrt(num);
    if ((sqRoot * sqRoot) == num)
        return true;
    
    return false;
}

int main()
{
    string input;
    getline(cin, input);

    istringstream numStream(input);
    int num;

    vector<int> numbers;

    while (numStream >> num) {
        if (isSquare(num))
            numbers.push_back(num);
    }

    sort(numbers.begin(), numbers.end(), greater<int>());

    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}

