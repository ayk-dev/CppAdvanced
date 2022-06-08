#include <map>
#include <iostream>

using namespace std;

int main()
{
    map<int, string> numbers{ {2, "two"} };
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << ",";
    }

    return 0;
}

