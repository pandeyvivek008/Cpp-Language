/* Q. Given a rotated sorted array, find the minimum element using Modified Binary Search.

Example:
arr = {4, 5, 6, 7, 0, 1, 2}
Output: 0
*/

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int findMin(vector<int> & arr, int n){
    int low=0;
    int high=n-1;
    int ans=INT_MAX;

    while(low<=high){
        int mid=low+(high-low)/2;

        //search space is already sorted.
        //then always arr[low] is will be smaller.
        //in that search space.
        if(arr[low]<=arr[high]){
            ans=min(ans,arr[low]);
            break;
        }

        // Left half is sorted
        if(arr[mid]>=arr[mid]){
            ans=min(ans,arr[low]);
            low=mid+1;
        }
        // Right half is sorted
        else{
            ans=min(ans,arr[mid]);
            high=mid-1;
        }
    }
    return ans;
}

int main(){

    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int n = arr.size();

    cout << "Minimum element is: " << findMin(arr, n) << endl;
}