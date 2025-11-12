#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int lo=0;
    int hi=size-1;
   
    int target=3;

    while(lo<=hi){
     int mid=lo+(hi-lo)/2;
        if(arr[mid]==target){
            cout<<mid;
            break;
        }else if(arr[mid]<target){
            lo=mid+1;
        }else if(arr[mid]>target){
            hi=mid-1;
        }
    }
}