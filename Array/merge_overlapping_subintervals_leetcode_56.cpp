#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>>& arr) {
    sort(arr.begin(), arr.end());  // Step 1: sort

    vector<vector<int>> ans;

    for (int i = 0; i < (int) arr.size(); i++) {

        // agar ans empty hai ya overlap nahi hai
        if (ans.empty() || arr[i][0] > ans.back()[1]) {
            ans.push_back(arr[i]);
        }
        // overlap hai
        else {
            ans.back()[1] = max(ans.back()[1], arr[i][1]);
        }
    }
    return ans;
}

int main() {
    vector<vector<int>> intervals = {
        {1,3},{2,4},{2,6},{8,9},{8,10},{9,11},{15,18},{16,17}
    };

    vector<vector<int>> res = mergeIntervals(intervals);

    cout << "Merged Intervals:\n";
    for (auto it : res) {
        cout << "[" << it[0] << ", " << it[1] << "]\n";
    }
    return 0;
}
