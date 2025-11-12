#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int l=0;
    int r=size-1;

    while(l<r){
        cout<<arr[l]<<endl;
        cout<<arr[r]<<endl;
        l++;
        r--;
    }
    cout<<arr[r];
}