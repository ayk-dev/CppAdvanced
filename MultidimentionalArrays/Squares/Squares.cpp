#include <iostream>
#include <vector>
#include <string>
#include <utility>

using namespace std;

void print(const std::vector<std::vector<char>>& vec2D) {
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

    vector< vector<char> > matrix;
    matrix.resize(rows);

    int i, j;
    for (i = 0; i < rows; i++) {
        matrix[i].resize(cols);
        for (j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    //print(matrix);

    int equalSquares = 0;
    for (i = 0; i < rows - 1; i++) {
        for (j = 0; j < cols - 1; j++) {
            if (matrix[i][j] == matrix[i][j + 1] && matrix[i][j + 1] == matrix[i + 1][j] 
                && matrix[i + 1][j] == matrix[i + 1][j + 1])
                equalSquares += 1;
        }
    }

    cout << equalSquares << endl;
    
    return 0;
}

