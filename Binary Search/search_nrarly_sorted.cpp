#include<iostream>
using namespace std;
int main(){
    int arr[]={20,10,30,50,40,70,60};
    int size=7;
    int start=0;
    int end=size-1;
    int target=40;

    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
              cout<<mid;
              break;
        }else if(arr[mid-1]==target && arr[mid-1]>=0){
            cout<<mid-1;
            break;
        }else if(arr[mid+1]==target && arr[mid+1]>=0){
            cout<<mid+1;
            break;
        }else if(arr[mid]<target){
            start=mid+2;
        }else{
            end=mid-2;
        }
    }
}