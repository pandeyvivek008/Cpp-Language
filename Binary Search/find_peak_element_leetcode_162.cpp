#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int>& nums) {

    int n = nums.size();   // size of array

    // Case 1: Only one element → that itself is a peak
    if (n == 1) return 0;

    // Case 2: Two elements → larger one is the peak
    if (n == 2) {
        return nums[0] > nums[1] ? 0 : 1;
    }

    // Check first element
    if (nums[0] > nums[1]) return 0;

    // Check last element
    if (nums[n - 1] > nums[n - 2]) return n - 1;

    // Binary search range (safe indices)
    int low = 1;
    int high = n - 2;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if mid is peak
        if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) {
            return mid;
        }
        // Increasing slope → move right
        else if (nums[mid] > nums[mid - 1]) {
            low = mid + 1;
        }
        // Decreasing slope → move left
        else {
            high = mid - 1;
        }
    }

    return -1; // theoretically unreachable
}

int main() {

    vector<int> nums = {1, 2, 1, 3, 5, 6, 4};

    int peakIndex = findPeakElement(nums);

    cout << "Peak index: " << peakIndex << endl;
    cout << "Peak value: " << nums[peakIndex] << endl;

    return 0;
}
