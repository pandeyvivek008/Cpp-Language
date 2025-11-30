/* Q. Given a rotated sorted array with UNIQUE elements,
       find how many times the array has been rotated.

       Example:
       Input : arr = {4, 5, 6, 7, 0, 1, 2}
       Output: 4

       Explanation:
       The original sorted array would be {0,1,2,4,5,6,7}
       The minimum element (0) is at index 4
       Therefore array is rotated 4 times.
*/

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int findHowManyTimesRotated(vector<int> & arr, int n){
    int low=0;
    int high=n-1;
    int ans=INT_MAX;
    int index=-1;

    while(low<=high){
        int mid=low+(high-low)/2;

        //search space is already sorted.
        //then always arr[low] is will be smaller.
        //in that search space.
        if(arr[low]<=arr[high]){
            if(arr[low]<ans){
                index=low;
            }
            break;
        }

        // Left half is sorted
        if(arr[low]<=arr[mid]){
            if(arr[low]<ans){
                index=low;
                ans=arr[low];
            }
            low=mid+1;
        }
        // Right half is sorted
        else{
            high=mid-1;
            if(arr[mid]<ans){
                index=mid;
                ans=arr[mid];
            }
        }
    }
    return index;
}

int main(){

    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int n = arr.size();

    cout << "Minimum element is: " << findHowManyTimesRotated(arr, n) << endl;
}