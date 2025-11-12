#include<iostream>
#include<vector>
using namespace std;
int main(){
    int A[]={1,2,2,3,3,4,5,6};
    int B[]={2,3,3,5,6,6,7};
    int n=sizeof(A)/sizeof(A[0]);
    int m=sizeof(B)/sizeof(B[0]);
    int i=0;
    int j=0;

    vector<int>ans;

    while(i<n && j<m){
        if(A[i]< B[j]){
            i++;
        }else if(B[j] < A[i]){
            j++;
        }else{
            //if(ans.size() == 0 || ans.back() != A[i]){ // duplicate check
                    ans.push_back(A[i]);
           // }
                i++;
                j++;
        }
    }
    for(int x : ans){
        cout << x << " ";
    }
}