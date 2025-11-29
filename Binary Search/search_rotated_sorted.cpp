/*Q. Given a rotated sorted array, write a program to search a target element using Modified Binary Search.

Array may be rotated at any pivot. You must return the index of the target if found, otherwise return -1.

Example Input:
arr = {7, 8, 9, 1, 2, 3, 4, 5, 6}
target = 1

Expected Output:
Target found at index: 3
*/


#include <iostream>
#include <vector>
using namespace std;

int searchInRotated(vector<int> &arr, int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
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

    vector<int> arr = {7,8,9,1,2,3,4,5,6};
    int n = arr.size();

    int target = 1;

    int index = searchInRotated(arr, n, target);

    if (index != -1)
        cout << "Target found at index: " << index;
    else
        cout << "Target not found";

    return 0;
}
