#include <iostream>
#include <string>
#include <queue>
#include <utility>
#include <sstream>

using namespace std;

void readData(queue< pair<string, int> > &pepi, queue< pair<string, int> > &mimi, int & n) {
    for (int i = 0; i < n; i++) {
        string input;
        getline(cin, input);

        istringstream ss(input);
        string name, customer;
        int minutes;
        ss >> name >> customer >> minutes;
        pair <string, int> current = pair <string, int>(customer, minutes);

        if (name == "Pepi")
            pepi.push(current);
        else
            mimi.push(current);   
    }
}

string process(queue< pair<string, int> >& twin, string name) {
    string result = name;
    if (twin.empty()) {
        result += " Idle";
        return result;
    }
    pair < string, int >& current = twin.front();
    string customer = current.first;
    int& minutes = current.second;
    minutes--;
    result += " processing " + customer;  
    if (minutes == 0)
        twin.pop();
    return result;
}

int main()
{
    int n;
    cin >> n; cin.ignore();

    queue< pair<string, int> > pepi;
    queue< pair<string, int> > mimi;
    readData(pepi, mimi, n);
    
    size_t time;
    cin >> time; cin.ignore();

    for (size_t turn = 0; turn < time; turn++) {
        string pepiResult = process(pepi, "Pepi");
        cout << pepiResult << endl;

        string mimiResult = process(mimi, "Mimi");
        cout << mimiResult << endl;
    }
    
    return 0;
}
