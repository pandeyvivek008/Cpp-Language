/* Q: Given a sorted array where every element appears exactly twice except one element 
      which appears only once, find that single element in O(log n) using Binary Search.

Example:
arr = {1,1,2,2,3,3,4,5,5,6,6}
Output = 4
*/

#include<iostream>
#include<vector>
using namespace std;

int singleNonDuplicate(vector<int> & arr, int n){

    // If array has only one element
    if(n == 1) 
        return arr[0];

    // Check if first element is single
    if(arr[0] != arr[1]) 
        return arr[0];

    // Check if last element is single
    if(arr[n-1] != arr[n-2]) 
        return arr[n-1];

    // Binary search between 1 and n-2 because edges are already checked
    int low = 1;
    int high = n - 2;

    while(low <= high){

        int mid = low + (high - low) / 2;

        // If mid is the SINGLE ELEMENT
        if(arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1]){
            return arr[mid];
        }

        /*
         Pattern Logic:
         - Pairs start as: (even, odd)
           Example: index 0-1, 2-3, 4-5 ...
         - When the single element appears, this pairing pattern breaks.

         If:
         mid is odd  AND matches with left:  arr[mid] == arr[mid -1]
         OR
         mid is even AND matches with right: arr[mid] == arr[mid +1]

         → means we are on LEFT SIDE (valid pattern)  
         → so move right (low = mid + 1)
        */
        if((mid % 2 == 1 && arr[mid] == arr[mid - 1]) ||
           (mid % 2 == 0 && arr[mid] == arr[mid + 1])){
            
            low = mid + 1;  // Move to the right side
        }
        else{
            high = mid - 1; // We are on the right side, move left
        }
    }

    return -1; // Ideally never reached
}

int main(){

    vector<int> arr = {1,1,2,2,3,3,4,5,5,6,6};
    int n = arr.size();

    cout << "Single element is: " << singleNonDuplicate(arr, n) << endl;

}