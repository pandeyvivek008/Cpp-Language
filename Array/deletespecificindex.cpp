#include<iostream>
using namespace std;
int main () {
    int arr[5]={1,2,3,4,5};
    int index;
    cout<<"Enter the index: ";
    cin>>index;
    for(int i=index; i<4; i++){
        arr[i]=arr[i+1];
    }
    for(int i=0; i<4; i++){
        cout<<arr[i];
    }
}