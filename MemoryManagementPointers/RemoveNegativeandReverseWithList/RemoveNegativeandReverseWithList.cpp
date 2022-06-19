#include <iostream>
#include <list>
#include <sstream>
#include <string>

using namespace std;

void printList(const list<int>& myList, const string& message) {
    if (myList.size() > 0) {
        for (list<int>::const_iterator i = myList.begin(); i != myList.end(); i++)
            cout << *i << " ";
    }
    else
        cout << message;
    cout << endl;
}

int main()
{
    string input;
    getline(cin, input);

    list<int> numbers;

    istringstream ss(input);
    int num;

    while (ss >> num) {
        if (num >= 0)
            numbers.push_front(num);
    }

    printList(numbers, "empty");
   
    return 0;
}