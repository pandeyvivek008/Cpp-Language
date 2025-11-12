#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int j = i + 1;
            int k = n - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < 0) {
                    j++;
                } else if (sum > 0) {
                    k--;
                } else {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;

                    while (j < k && nums[j] == nums[j - 1]) j++; // skip duplicate j
                    while (j < k && nums[k] == nums[k + 1]) k--; // skip duplicate k
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    // Call the function
    vector<vector<int>> result = sol.threeSum(nums);

    // Print the result
    cout << "Unique triplets that sum to 0:" << endl;
    for (auto &triplet : result) {
        cout << "[ ";
        for (int x : triplet) cout << x << " ";
        cout << "]" << endl;
    }

    return 0;
}
