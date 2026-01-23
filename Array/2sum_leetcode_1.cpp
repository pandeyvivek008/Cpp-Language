#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> arr = {2,6,5,8,11};
    int size=5;
    int left=0;
    int right=size-1;
    int target=14;

    sort(arr.begin(), arr.end());
    while(left<right){
        int sum = arr[left]+arr[right];
        if(sum==target){
            cout<<"Yes";
            return 0;
        }else if(sum < target){
            left++;
        }else{
            right--;
        }
    }
    cout<<"No";
}