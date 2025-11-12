/* Q:- Given vector arr[] sorted in increasing order. Return an array of square of each number sorted in increasing order. 
Where size of vector 1<size<101.
Input: [0,1,2,3]
Output: [0,1,4,9]

Input: [-5,-4,-3,-2,-1]
Output: [1,4,9,16,25]

Input: [-4,-3,-1,0,2,10]
Output: [0,2,4,9,16,100] */

#include <iostream>
using namespace std;
int main() {
    int arr[] = {-4,-3,-1,0,2,10} ;
    int n=6;

    //code to arrange square of given element in inc order
    int result[n];
    int i=0;
    int j=n-1;
    int k=n-1;

    while(i <= j && k >= 0) {
        if(abs(arr[i]) > abs(arr[j])) {
            result[k] = arr[i]*arr[i];
            i++;
            k--;
        }else {
            result[k] = arr[j]*arr[j];
            j--;
            k--;
        }
    }
    for(int i=0; i<n; i++) cout<<result[i]<<" ";
}