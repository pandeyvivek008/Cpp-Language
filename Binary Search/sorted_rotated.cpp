#include<iostream>
using namespace std;
int main(){
    int arr[]={12,14,16,2,4,6,8,10};
    int size=8;
    int start=0;
    int end=size-1;
    int target=6;
     int pivot=-1;
    

    while(start<=end){
        int mid=start+(end-start)/2;
        if(start==end){
            pivot=start;
            break;
        }else if(arr[mid]>arr[mid+1]){
            pivot=mid;
            break;
        }else if(arr[mid]<arr[mid-1]){
            pivot=mid-1;
            break;
        }else if(arr[start]>arr[mid]){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }

    int l;
    int r;
   
    if(target>=arr[0] && target<=arr[pivot-1]){
        l=0;
        r=pivot-1;
    }else{
        l=pivot;
        r=size-1;
    }

    int ans=-1;

    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]==target){
            ans=mid;
            break;
        }else if(arr[mid]<target){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    cout<<ans;

    
}