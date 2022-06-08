#include <iostream>
#include <set>
#include <string>
#include <sstream>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    istringstream numStream(input);
    double num;

    set<double, greater<double> > numbers;

    while (numStream >> num) {
        numbers.insert(num);
    }

    int n = 3;
    for (set<double>::iterator i = numbers.begin(); i != numbers.end() && n; i++, n--)
        cout << *i << " ";
    cout << endl;

    return 0;
}

