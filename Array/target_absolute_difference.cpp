/* Q:- Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists a pair in the array whose 
absolute difference is exactly x.
Given: n>0
Input: [5,10,15,20,26] x=10
Output: Yes

Input: [5,6,7,8,9] x=4
Output: Yes

Input: [9,23,45,69,78] x=56
Output: No */

#include <iostream>
using namespace std;
int main() {
    int arr[] = {5,10,15,20,26};
    int x = 5;
    int n = 10;

    //code to check whether there is any pair with the given abs difference
    int i=0;
    int j=1;
    bool found = false;
    while(i<n and j<n) {
        if(abs(arr[i]-arr[j]) == x) {
            found = true;
            break;
        }else if(abs(arr[i]-arr[j]) < x){
                j++;
            }else {
                i++;
            }
        }
        if(found == true) cout<<"Yes";
    else cout<<"No";
    }