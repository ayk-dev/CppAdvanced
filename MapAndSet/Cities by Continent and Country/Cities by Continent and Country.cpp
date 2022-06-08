#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
    int n;
    cin >> n; cin.ignore();

    map< string, vector<string> >data;
    vector<string> continents;

    
    for (int i = 0; i < n; i++) {
        string continent, country, city;
        cin >> continent >> country >> city;

        auto itContinent = find(continents.begin(), continents.end(), continent);
        if (itContinent == continents.end()) {
            continents.push_back(continent);

            vector<string> cities;
            cities.push_back(city);

            map < string, vector<string> > countryMap;
            countryMap[country] = cities;

            //vector< map<string, vector<string> > > contVector;
            // contVector.push_back(countryMap);

            // data[continent].push_back(countryMap);
        }
    }
    
    return 0;
}
