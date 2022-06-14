#include <iostream>
#include <vector>
#include <string>
#include <utility>

using namespace std;

void print(const std::vector<std::vector<int>>& vec2D) {
    for (auto& row : vec2D) {
        for (auto& elem : row) {
            std::cout << elem << ' ';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

int main()
{
    int rows, cols;
    cin >> rows >> cols;

    vector< vector<int> > matrix;
    matrix.resize(rows);

    int i, j;
    for (i = 0; i < rows; i++) {
        matrix[i].resize(cols);
        for (j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    int num;
    cin >> num;

    // print(matrix);

    vector < pair<int, int> > positions;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] == num) {
                pair<int, int> position(i, j);
                positions.push_back(position);
              }
        }
    }

    if (positions.size() > 0) {
        for (auto p : positions) {
            cout << p.first << " " << p.second << endl;
        }
        return 0;
    }

    cout << "not found" << endl;

    return 0;
}

