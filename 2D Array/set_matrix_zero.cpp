#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {1,1,1,1},
        {1,0,1,1},
        {1,1,0,1},
        {0,1,1,1}
    };

    int n = matrix.size();
    int m = matrix[0].size();

    int col0 = 1;

    // STEP 1: Mark rows & columns
    for(int i = 0; i < n; i++){
        if(matrix[i][0] == 0) col0 = 0;

        for(int j = 1; j < m; j++){
            if(matrix[i][j] == 0){
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    // STEP 2: Fill zeros using markers
    for(int i = 1; i < n; i++){
        for(int j = 1; j < m; j++){
            if(matrix[i][0] == 0 || matrix[0][j] == 0){
                matrix[i][j] = 0;
            }
        }
    }

    // STEP 3: First row
    if(matrix[0][0] == 0){
        for(int j = 0; j < m; j++){
            matrix[0][j] = 0;
        }
    }

    // STEP 4: First column
    if(col0 == 0){
        for(int i = 0; i < n; i++){
            matrix[i][0] = 0;
        }
    }

    // Print result
    cout << "Final Matrix:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
