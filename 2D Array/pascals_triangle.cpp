#include <iostream>
#include <vector>
using namespace std;

vector<int> generateRow(int row) {
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1); // C(row,0) = 16

    for (int col = 1; col <= row; col++) {
        ans = ans * (row - col + 1);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans;
    for (int i = 0; i < numRows; i++) {
        ans.push_back(generateRow(i));
    }
    return ans;
}

int main() {
    int numRows;
    cout << "Enter number of rows: ";
    cin >> numRows;

    vector<vector<int>> pascal = generate(numRows);

    cout << "Pascal's Triangle:" << endl;
    for (auto row : pascal) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
