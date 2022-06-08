#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    map<string, int> resources;
    vector<string> order;

    while (true) {
        string res;
        cin >> res;

        if (res == "stop")
            break;

        int quantity;
        cin >> quantity;

        auto it = resources.find(res);
        if (it == resources.end()) {
            order.push_back(res);
            resources[res] = 0;
        }
        resources[res] += quantity;
    }

    for (int i = 0; i < order.size(); i++) {
        cout << order[i] << " -> " << resources[order[i]] << endl;
    }

    return 0;
}

