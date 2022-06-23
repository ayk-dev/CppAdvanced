#include <iostream>
#include <list>
#include <utility>
#include <sstream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

void readData(list<pair<string, pair<string, string> > >& locations, string& input) {
    while (true) {

        getline(cin, input);
        if (input == ".")
            break;

        istringstream ss(input);

        pair<string, pair<string, string> > buffer;
        pair<string, string>& coord = buffer.second;

        getline(ss, buffer.first, ',');
        getline(ss, coord.first, ',');
        getline(ss, coord.second, ',');

        locations.push_back(buffer);
    }
}

void printList(list<pair<string, pair<string, string> > >& locations) {
    //map<string, string>::const_iterator it;
    for (auto it = locations.begin(); it != locations.end(); it++) {
        cout << it->first << " " << it->second.first << " " << it->second.second << endl;
    }
    cout << endl;
}

int main()
{
    list<pair<string, pair<string, string> > > locations;

    string input;
    readData(locations, input);

    //printList(locations);

    
    while (true) {

        getline(cin, input);
        if (input == ".")
            break;
        
        if (*input.begin() > '9') {
            for (auto itr = locations.begin(); itr != locations.end(); itr++) {
                if (itr->first == input)
                    cout << input << "," << itr->second.first << "," << itr->second.second << endl;
            }
                         
        } else {
            istringstream inputStr(input);
            string lat, lon;
            inputStr >> lat;
            inputStr >> lon;
            for (auto itr = locations.begin(); itr != locations.end(); itr++) {
                if ((itr->second.first == lat) || (itr->second.second == lon)) {
                    cout << itr->first << "," << itr->second.first << "," << itr->second.second << endl;
                }
            }
            
        }
       
    }
    
    return 0;
}
