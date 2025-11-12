#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,50,40,30};
    int size=5;
    int lo=0;
    int hi=size-1;

    while(lo<hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]<arr[mid+1]){
            lo=mid+1;
        }else{
            hi=mid;
        }
    }
    cout<<lo;
}