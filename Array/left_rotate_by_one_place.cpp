#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int temp=arr[0];

    for(int i=1; i<size; i++){
        arr[i-1]=arr[i];
    }
    arr[size-1]=temp;
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}