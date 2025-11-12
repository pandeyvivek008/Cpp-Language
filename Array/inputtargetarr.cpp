#include<iostream>
using namespace std;
int main () {
    int arr[5]={1,2,0,4,5};
    int input;
    int index;
    cout<<"Enter a input: ";
    cin>>input;
    cout<<"Enter a index: ";
    cin>>index;
    arr[index]=input;
    for(int i=0; i<=4; i++) {
         cout<<arr[i];
    }
}