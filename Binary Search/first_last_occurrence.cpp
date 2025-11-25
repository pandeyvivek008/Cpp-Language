#include<iostream>
#include<vector>
using namespace std;

int firstOccurrence(vector<int> & arr, int n, int k){
    int low=0 , high=n-1;
    int first = -1;

    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==k){
            first=mid;
            high=mid-1;
        }else if(arr[mid] < k){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return first;
}

int lastOccurrence(vector<int> & arr, int n, int k){
    int low=0, high=n-1;
    int last=-1;

    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==k){
            last=mid;
            low=mid+1;
        }else if(arr[mid] < k){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return last;
}

int main(){

    vector<int> arr= {2,8,8,8,8,8,11,13};
    int n= arr.size();
    int k=3;

    int first = firstOccurrence(arr, n, k);
    int last = lastOccurrence(arr, n, k);

    if(first == -1) {
        cout << k << " is not present in the array." << endl;
    }

    cout << "First occurrence of " << k << " is at index: " << first << endl;
    cout << "Last occurrence of " << k << " is at index: " << last << endl;

}