#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,2,2,2,3,3,4,4,5,5};
    int size=11;
    int start=0;
    int end=size-1;

    while(start<=end){
        int mid=start+(end-start)/2;
        if(start==end){
            cout<<arr[start];
            break;
        }
        if(mid &1){
        if(arr[mid]==arr[mid-1]){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }else{
       if(arr[mid]==arr[mid+1]){
        start=mid+2;
       }else{
        end=mid;
       }
    }
}
}