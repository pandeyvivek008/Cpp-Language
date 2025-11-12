#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,1,1,1,1,4,2,3};
    int n=10;
    int left=0;
    int right=0;
    long long sum=arr[0];
    int maxLen=0;
    int k=6;

    while(right<n){
        while(left<=right && sum>k){
            sum -=arr[left];
            left++;
        }
        if(sum==k){
            maxLen=max(maxLen, right-left+1);
        }
        right++;
        if(right<n){
           sum += arr[right];
        }
    }
    cout<<maxLen;
}