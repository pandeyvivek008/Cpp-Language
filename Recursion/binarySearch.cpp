#include<iostream>
using namespace std;

int binarySearch(int arr[],int start,int end, int target){
        //base case
        if(start>end){
            return -1;
        }

        //recursive case
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            return mid;
        }
        
        if(arr[mid]<target){
            return binarySearch(arr,mid+1,end,target);
        }else {
            return binarySearch(arr,start,mid-1,target);
        }
}
int main(){
    int n;
    cout<<"Enter a size of arr: ";
    cin>>n;

    int arr[n];
    cout<<"Enter a element in arr: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter a target value: ";
    cin>>target;

    int result = binarySearch(arr,0,n-1,target);
    cout<<result<<endl;

}