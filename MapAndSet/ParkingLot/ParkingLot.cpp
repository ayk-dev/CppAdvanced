#include <string>
#include <iostream>
#include <set>
#include <sstream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int main()
{
    set<string> parkingLot;
    
    list<string> cars;

    
    while (true) {
        string input;
        getline(cin, input);

        if (input == "END")
            break;

        istringstream ss(input);
        string command, carNumber;
        ss >> command;
        ss >> carNumber;

        if (command == "IN,") {
            parkingLot.insert(carNumber);
          
            cars.push_back(carNumber);
        }
        else if (command == "OUT,") {
            parkingLot.erase(carNumber);
            cars.remove(carNumber);
        }
    }

    if (parkingLot.empty()) {
        cout << "Parking Lot is Empty" << endl;
        return 0;
    }
    for (string car : cars) {
        cout << car << endl;
    }

    return 0;
}

