#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,6,7,8,9};
    int size=9;
    int lo=0;
    int hi=size-1;
    //int missing=5;
    int ans=-1;

    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        int diff=arr[mid]-mid;
        if(diff==1){
            lo=mid+1;
        }else{
            ans=mid;
            hi=mid-1;
        }
    }
    cout<<ans;
    
}