#include<iostream>
using namespace std;
int main () {
    int arr[5];
    cout<<"Enter value of index 0: ";
    cin>>arr[0];
    cout<<"Enter value of index 1: ";
    cin>>arr[1];
    cout<<"Enter value of index 2: ";
    cin>>arr[2];
    cout<<"Enter value of index 3: ";
    cin>>arr[3];
    cout<<"Enter value of index 4: ";
    cin>>arr[4];
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
}