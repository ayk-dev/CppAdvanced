#include <array>
#include <iostream>

using namespace std;

int main()
{
    int rows, cols;
    cin >> rows >> cols;

    int * * array;

    array = new int* [rows]; // allocate 'rows' (int *) pointers
    for (int r = 0; r < rows; r++) 
        array[r] = new int[cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cin >> array[i][j];
    }

    int outRows, outCols;
    cin >> outRows >> outCols;

    for (int curRow = 0; curRow < outRows; curRow++) {
        for (int curCol = 0; curCol < outCols; curCol++) 
            cout << array[curRow][curCol] << " ";
        cout << endl;
    }


    for (int r = 0; r < rows; r++) {
        delete[] array[r];
    }
    delete[] array;
    return 0;
}
