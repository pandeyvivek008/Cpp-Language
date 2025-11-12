#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,30,30,30,40,50};
    int target=30;
    int size=8;
    int start=0;
    int end=size-1;
    int ans=-1;

    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            ans=mid;
            end=mid-1;
        }else if(arr[mid]<target){
            start=mid+1;
        }else if(arr[mid]>target){
            end=mid-1;
        }
    }
    cout<<ans;
}