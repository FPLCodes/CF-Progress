#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
    int matrix[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }
    int row, col;
 
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] == 1) {
                row = i;
                col = j;
            }
        }
    }
    bool middle = false;
    int moves = 0;
 
    while (!middle) {
        if (row == 2 && col == 2) {
            middle = true;
        }
        else if (col > 2) {
            swap(matrix[row][col], matrix[row][col - 1]);
            col--;
            moves++;
        }
        else if (col < 2) {
            swap(matrix[row][col], matrix[row][col + 1]);
            col++;
            moves++;
        }
        else if (row > 2) {
            swap(matrix[row][col], matrix[row - 1][col]);
            row--;
            moves++;
        }
        else if (row < 2) {
            swap(matrix[row][col], matrix[row + 1][col]);
            row++;
            moves++;
        }
    }
    cout << moves << endl;
    return 0;
}