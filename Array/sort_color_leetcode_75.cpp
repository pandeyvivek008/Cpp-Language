/* Leetcode:- 75. Sort Colors
Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2] */

#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int arr[] = {0,1,0,1,2,0,2,1};
    int size = 8;
    int i = 0;       // current index
    int z = 0;       // position for next 0
    int t = size-1;  // position for next 2

    while(i <= t) {
        if(arr[i] == 0) {
            swap(arr[z], arr[i]);
            z++;
            i++;
        }
        else if(arr[i] == 2) {
            swap(arr[t], arr[i]);
            t--;
        }
        else {
            i++;
        }
    }

    for(int j = 0; j < size; j++) {
        cout << arr[j] << " ";
    }
}
