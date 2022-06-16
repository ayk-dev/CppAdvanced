// Solution 1

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector < vector<int> > getMatrix(int r) {
    vector < vector<int> > matrix;
    matrix.resize(r);

    int i;
    for (i = 0; i < r; i++) {
        vector <int> row;
        string rowStr;
        getline(cin, rowStr);

        istringstream ss(rowStr);
        int element;

        while (ss >> element) {
            row.push_back(element);
        }

        matrix.push_back(row);
    }

    return matrix;
}

bool compareMatrices(const vector<vector<int>>& first, const vector<vector<int>>& second) {

    if (first == second) {
        return true;
    }

    return false;
}

int main()
{
    int r;
    cin >> r; cin.ignore();

    vector < vector<int> > first = getMatrix(r);


    int r2;
    cin >> r2; cin.ignore();

    vector < vector<int> > second = getMatrix(r2);

    bool areEqual = compareMatrices(first, second);

    if (areEqual)
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;

    return 0;
}

// Solution 2

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector < vector<int> > getMatrix(int r) {
    vector < vector<int> > matrix;
    matrix.resize(r);

    int i;
    for (i = 0; i < r; i++) {
        vector <int> row;
        string rowStr;
        getline(cin, rowStr);

        istringstream ss(rowStr);
        int element;

        while (ss >> element) {
            row.push_back(element);
        }

        matrix.push_back(row);
    }

    return matrix;
}

bool compareMatrices(const int r, const int r2,
    const vector<vector<int>>& first, const vector<vector<int>>& second) {

    if (r != r2) {
        return false;
    }
    else {
        for (int i = 0; i < first.size(); ++i) {
            for (int j = 0; j < first[i].size(); ++j) {
                if (first[i][j] != second[i][j]) {
                    return false;
                }
            }
        }
    }

    return true;
}

int main()
{
    int r;
    cin >> r; cin.ignore();

    vector < vector<int> > first = getMatrix(r);

    int r2;
    cin >> r2; cin.ignore();

    vector < vector<int> > second = getMatrix(r2);

    if (compareMatrices(r, r2, first, second))
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;

    return 0;
}