#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;

vector<int> nextGreaterPermutation(vector<int> &A){
    int index=-1;
    int n=A.size();

    // Step 1: Find first decreasing element from right
    for(int i=n-2; i>=0; i--){
        if(A[i]<A[i+1]){
            index=i;
            break;
        }
    }

    // Step 2: If not found, reverse whole array (last permutation → first permutation)
    if(index==-1){
        reverse(A.begin(),A.end());
        return A;
    }

    // Step 3: Find element just greater than A[index] from right side
    for(int i=n-1; i>index; i--){
        if(A[i]>A[index]){
            swap(A[i],A[index]);
            break;
        }
    }

    // Step 4: Reverse the suffix after index
    reverse(A.begin() + index + 1, A.end());
    return A;
}
int main(){
    vector<int> arr = {2,1,5,4,3,0,0};
    arr = nextGreaterPermutation(arr);

    for (int x : arr) cout << x << " ";
    cout << endl;
}