#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {4,3,2,7,8,2,3,1};
    int n = nums.size();

    // Step 1: Mark visited numbers
    for (int i = 0; i < n; i++) {
        int index = abs(nums[i]) - 1;

        // Mark the index as visited
        if (nums[index] > 0) {
            nums[index] = -nums[index];
        }
    }

    // Step 2: Find missing numbers
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (nums[i] > 0) {
            ans.push_back(i + 1);
        }
    }

    // Print result
    for (int x : ans)
        cout << x << " ";

    return 0;
}
