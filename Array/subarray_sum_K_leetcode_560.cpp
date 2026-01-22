#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findAllSubarraysWithGivenSum(vector<int> &arr, int k) {
    unordered_map<int, int> mpp;
    mpp[0] = 1;   // base case

    int preSum = 0;
    int cnt = 0;

    for (int i = 0; i < (int)arr.size(); i++) {
        preSum += arr[i];

        int remove = preSum - k;

        cnt += mpp[remove];

        mpp[preSum]++;
    }

    return cnt;
}

int main() {
    vector<int> arr = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
    int k = 3;

    cout << "Number of subarrays with sum K = "
         << findAllSubarraysWithGivenSum(arr, k);

    return 0;
}
