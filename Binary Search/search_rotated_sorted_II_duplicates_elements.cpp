/* Q. Search in Rotated Sorted Array (Duplicates Allowed)

Given a rotated sorted array that may contain duplicate elements, 
write a program to search for a target value using a modified binary search.

If the target exists, return its index. 
If it does not exist, return -1.

Example:
Input:
arr = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6}
target = 3

Possible Output:
Target found at index: 4  (or 5 or 6, because duplicates exist)
*/

#include <iostream>
#include <vector>
using namespace std;

int searchInRotated(vector<int> &arr, int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Target found
        if (arr[mid] == target) {
            return mid;
        }

        // Duplicate case: cannot decide sorted half
        // Handling duplicates
        if (arr[low] == arr[mid] && arr[mid] == arr[high]) {
            low++;
            high--;
            continue;
        }

        // Left half sorted
        if (arr[low] <= arr[mid]) {
            if (arr[low] <= target && target <= arr[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        // Right half sorted
        else {
            if (arr[mid] <= target && target <= arr[high]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main() {

    vector<int> arr = {7,8,1,2,3,3,3,4,5,6};
    int n = arr.size();

    int target = 3;

    int index = searchInRotated(arr, n, target);

    if (index != -1)
        cout << "Target found at index: " << index;
    else
        cout << "Target not found";

    return 0;
}
