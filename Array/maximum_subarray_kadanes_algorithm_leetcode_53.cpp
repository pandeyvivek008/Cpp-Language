#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int size=8;
    int sum=0;
    int maxi = INT_MIN;
    int start = 0;
    int ansStart = -1;
    int ansEnd = -1;
    for(int i=0; i<size; i++){
        if(sum==0){
            start = i;
        }
         sum += arr[i];
        if(sum > maxi){
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    cout << "Maximum Subarray Sum = " << maxi << endl;
    cout << "Subarray: ";
    for (int i = ansStart; i <= ansEnd; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}