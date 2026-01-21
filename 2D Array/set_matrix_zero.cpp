#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    int col0 = 1; // first column ke liye flag

    // STEP 1: Mark rows & columns
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] == 0) {
                matrix[i][0] = 0;   // row mark
                if(j != 0)
                    matrix[0][j] = 0; // column mark
                else
                    col0 = 0; // first column
            }
        }
    }

    // STEP 2: Convert inner matrix
    for(int i = 1; i < n; i++) {
        for(int j = 1; j < m; j++) {
            if(matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }

    // STEP 3: First row
    if(matrix[0][0] == 0) {
        for(int j = 0; j < m; j++)
            matrix[0][j] = 0;
    }

    // STEP 4: First column
    if(col0 == 0) {
        for(int i = 0; i < n; i++)
            matrix[i][0] = 0;
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 1, 1, 1},
        {1, 0, 1, 1},
        {1, 1, 0, 1},
        {0, 1, 1, 1}
    };

    setZeroes(matrix);

    cout << "Result Matrix:\n";
    for(auto row : matrix) {
        for(int val : row)
            cout << val << " ";
        cout << endl;
    }
}
