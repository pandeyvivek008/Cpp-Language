#include<iostream>
using namespace std;
int main(){
    int arr[]={12,14,16,2,4,6,8,10};
    int size=8;
    int start=0;
    int end=size-1;

    while(start<=end){
        int mid=start+(end-start)/2;
        if(start==end){
            cout<<start;
            break;
        }else if(arr[mid]>arr[mid+1]){
            cout<<mid;
            break;
        }else if(arr[mid]<arr[mid-1]){
            cout<<mid-1;
            break;
        }else if(arr[start]>arr[mid]){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
}