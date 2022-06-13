#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print(const std::vector<std::vector<char>>& vec2D) {
    for (auto& row : vec2D) {
        for (auto& elem : row) {
            std::cout << elem;
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

int main() {
	int rows, cols;
	cin >> rows >> cols;

	string snake;
	cin >> snake;
    
    int idx = 0;
    int i, j;

    vector< vector <char> > snakeMoves;
    snakeMoves.resize(rows);

    for (i = 0; i < rows; i++) {
        vector <char> rowElements;
        rowElements.resize(cols);
        if (i % 2 == 0) {
            for (j = 0; j < cols; j++) {
                rowElements[j] = snake[idx % snake.length()];
                idx++;
            }
        }
        else {
            for (j = cols - 1; j > -1; j--) {
                rowElements[j] = snake[idx % snake.length()];
                idx++;
            }
        }
        snakeMoves[i] = rowElements;
    }

    print(snakeMoves);
	
	return 0;
}