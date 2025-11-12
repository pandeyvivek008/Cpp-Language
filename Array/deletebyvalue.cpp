#include<iostream>
using namespace std;
int main () {
    int arr[5]={1,2,3,4,5};
    int index;
    int target;
    cout<<"Enter the target: ";
    cin>>target; 
    for(int i=0; i<=4; i++){
        if(arr[i]==target){
            index=i;
        }
    }
    for(int i=index; i<4; i++){
        arr[i]=arr[i+1];
    }
    for(int i=0; i<4; i++){
        cout<<arr[i];
    }
}