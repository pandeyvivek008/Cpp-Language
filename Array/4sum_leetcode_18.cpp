#include <bits/stdc++.h>
using namespace std;

/*
  Function: fourSum
  Input:
    nums   → array of integers
    target → required sum of 4 numbers

  Output:
    unique quadruplets whose sum == target
*/
vector<vector<int>> fourSum(vector<int>& nums, int target) {

    int n = nums.size();                 // total elements
    vector<vector<int>> ans;             // final answer container

    // STEP 1: Sort array to use two-pointer technique
    sort(nums.begin(), nums.end());

    // STEP 2: Fix first element (i)
    for(int i = 0; i < n; i++) {

        // Skip duplicate values for i
        if(i > 0 && nums[i] == nums[i-1]) continue;

        // STEP 3: Fix second element (j)
        for(int j = i + 1; j < n; j++) {

            // Skip duplicate values for j
            if(j > i + 1 && nums[j] == nums[j-1]) continue;

            // STEP 4: Two pointers for remaining two elements
            int k = j + 1;        // left pointer
            int l = n - 1;        // right pointer

            // Move pointers until they meet
            while(k < l) {

                // Use long long to avoid integer overflow
                long long sum = (long long) nums[i] + nums[j] +nums[k] +nums[l];

                // CASE 1: Perfect match
                if(sum == target) {

                    // Store the quadruplet
                    ans.push_back({nums[i], nums[j], nums[k], nums[l]});

                    // Move both pointers
                    k++;
                    l--;

                    // Skip duplicate k values
                    while(k < l && nums[k] == nums[k-1]) k++;

                    // Skip duplicate l values
                    while(k < l && nums[l] == nums[l+1]) l--;
                }

                // CASE 2: Sum too small → increase sum
                else if(sum < target) {
                    k++;
                }

                // CASE 3: Sum too large → decrease sum
                else {
                    l--;
                }
            }
        }
    }

    return ans;   // return all unique quadruplets
}

int main() {

    // Example input array
    vector<int> nums = {1,1,1,2,2,2,3,3,3,4,4,4,5,5};

    // Target sum
    int target = 8;

    // Call fourSum function
    vector<vector<int>> res = fourSum(nums, target);

    // Print result
    cout << "Quadruplets are:\n";
    for(auto q : res) {
        cout << "[ ";
        for(int x : q) cout << x << " ";
        cout << "]\n";
    }

    return 0;
}
