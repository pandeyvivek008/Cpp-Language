/*
 Q: Given a square matrix, rotate it by 90 degree clockwise
    without using any extra space.

 Input:
 1 2 3
 4 5 6
 7 8 9

 Output:
 7 4 1
 8 5 2
 9 6 3
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to rotate matrix 90 degree clockwise
void rotateArray(vector<vector<int>> &vec)
{
    int n = vec.size();

    // ---------------- STEP 1: TRANSPOSE ----------------
    // Transpose means: matrix[i][j] ↔ matrix[j][i]
    // We only swap upper triangle to avoid double swap
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(vec[i][j], vec[j][i]);
        }
    }

    // ---------------- STEP 2: REVERSE EACH ROW ----------------
    // After transpose, reverse every row to get 90° clockwise rotation
    for (int i = 0; i < n; i++)
    {
        reverse(vec[i].begin(), vec[i].end());
    }
}

int main()
{
    int n;
    cout << "Enter size of matrix: ";
    cin >> n;

    // Input square matrix
    vector<vector<int>> vec(n, vector<int>(n));
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> vec[i][j];
        }
    }

    // Rotate matrix
    rotateArray(vec);

    // Print rotated matrix
    cout << "Matrix after 90 degree clockwise rotation:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
