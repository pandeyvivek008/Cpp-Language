#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {8,1,2,2,3};
    int n = nums.size();

    // Step 1: Frequency array (0 to 100)
    vector<int> freq(101, 0);
    for (int x : nums) {
        freq[x]++;
    }

    // Step 2: Prefix sum
    for (int i = 1; i <= 100; i++) {
        freq[i] += freq[i - 1];
    }

    // Step 3: Build answer
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        if (nums[i] == 0)
            ans[i] = 0;
        else
            ans[i] = freq[nums[i] - 1];
    }

    // Print result
    for (int x : ans) cout << x << " ";
}
