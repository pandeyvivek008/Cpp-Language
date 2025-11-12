/*Q:- Given a vector arr[] sorted in increasing order of n size and an integer x, find the number of unique pairs that exist in the
array whose absolute sum is exactlyx.
Input: [1,2,3,4,6] X=7
Output: 2
Explanation: 1,6 and 3,4 sum of 7

Input: [1,3,3,5] X=6
Output: 2
Explanation: The unique pairs are 3,3 and 1,5

Input: [2,2,2] X=4
Output: 1
Explanation: The only unique pair 2,2 */ 

#include <iostream>
using namespace std;
int main() {
    int arr[]= {1,3,3,5};
    int x=6;
    int n=4;

    // code to find if there is a pair with sum x
    int i=0;
    int j=n-1;
    int answer = 0;
    while(i < j) {
       if(arr[i] + arr[j] == x) {
        //we found a pair
       answer += 1;
       i++;
       j--;
       }else if(arr[i] + arr[j] < x) {
        //sum is less than x, increase the sum
        i++;
       }else {
        //sum is more than x, decrease the sum
        j--;
       }
    }
    
    cout<<answer;
}