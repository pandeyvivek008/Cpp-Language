#include<iostream>
using namespace std;
int main() {
    int arr[5]={1,2,3,4,5};
    int left = 0;
    int right = 4;
    while(left<right){
        swap(arr[left],arr[right]);
          left++;
          right--;

    }
    for(int i=0; i<=4; i++){
        cout<<arr[i];
    }
}