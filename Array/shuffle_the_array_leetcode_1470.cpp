#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {2, 5, 1, 3, 4, 7};
    int n = nums.size() / 2;

    vector<int> ans;
    int i = 0, j = n;

    while (i < n && j < 2*n) {
        ans.push_back(nums[i]);
        ans.push_back(nums[j]);
        i++;
        j++;
    }

    for (int x : ans) cout << x << " ";
    return 0;
}
