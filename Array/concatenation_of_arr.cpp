#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3};
    int n = nums.size();

    vector<int> ans(2 * n);

    for(int i = 0; i < n; i++) {
        ans[i] = nums[i];       // first half
        ans[i + n] = nums[i];   // second half
    }

    for(int x : ans)
        cout << x << " ";
}
