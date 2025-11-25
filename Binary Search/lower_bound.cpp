/*
------------------------------------------------------------
📝 QUESTION:
Write a function `lowerBound` that takes a sorted array and 
returns the index of the first element which is greater than 
or equal to a given value `x`.

If all elements are smaller than `x`, then return `n`
(where `n` is the size of the array).

Use Binary Search to implement lower bound manually.

Example:
Input: arr = [1, 3, 5, 6, 8, 10], x = 6
Output: 3   (because arr[3] = 6 is the first >= x)

------------------------------------------------------------
*/

#include<iostream>
#include<vector>
using namespace std;

int lowerBound(vector<int>arr, int n, int x){
    int low=0;
    int high=n-1;
    int ans=n;

    while(low<=high){
        int mid = low+(high-low)/2;
        //may be an answer
        if(arr[mid]>=x){
            ans=mid;
            //look for small indexon left
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}

int main(){

   vector<int>arr = {1,2,3,3,5,8,8,10,10,11};
   int x=3;
   
   int index = lowerBound(arr, arr.size(), x);
   cout<<"Lower Bound Index:- "<<index<<endl;
}