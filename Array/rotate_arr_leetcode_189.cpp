/* Leetcode:- 189. Rotate Array
Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]

Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100] */

#include<iostream>
using namespace std;
void reverse(int arr[], int left,int right){
        while(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size=sizeof(arr)/4;
    
    int k=4;
     reverse(arr,0,size-1);
     reverse(arr,0,k-1);
     reverse(arr,k,size-1);
    

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

}