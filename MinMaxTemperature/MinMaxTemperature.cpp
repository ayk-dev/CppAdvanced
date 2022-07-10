#include <iostream>
#include <map>
#include <utility>
#include <string>
#include <iterator>

using namespace std;

void updateData(map<string, pair<double, double> >& citiesData, string& town, double& newMin, double& newMax) {
    pair<double, double>& temps = citiesData[town];
    //cout << temps.first << " " << temps.second << endl;
    if (newMin < temps.first)
        temps.first = newMin;
    if (newMax > temps.second)
        temps.second = newMax;
    //cout << temps.first << " " << temps.second << endl;
}

void printMap(const map<string, pair<double, double> >& citiesData) {
    map<string, pair<double, double> >::const_iterator mapItr;
    for (mapItr = citiesData.begin(); mapItr != citiesData.end(); mapItr++) {
        cout << mapItr->first << " " << mapItr->second.first << " " << mapItr->second.second << endl;
    }

}

int main()
{
    int n;
    cin >> n; cin.ignore();

    map<string, pair<double, double> > citiesData;

    for (int i = 0; i < n; i++) {
        string town;
        getline(cin, town);

        double minTemp, maxTemp;
        cin >> minTemp >> maxTemp; cin.ignore();

        if (citiesData.find(town) == citiesData.end()) {
            citiesData[town] = pair<double, double> (minTemp, maxTemp);
        }
        else {
            i--;
            updateData(citiesData, town, minTemp, maxTemp);
        }
    }

    printMap(citiesData);

    return 0;
}

