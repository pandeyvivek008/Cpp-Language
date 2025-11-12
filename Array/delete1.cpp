#include<iostream>
using namespace std;
int main() {
    int arr[]={1,2,3,4,5};
    int size=5;
    int target=3;
    int position=-1;

    for(int i=0; i<size; i++){
        if(arr[i]==target){
            position = i;
        }
    }
    for(int i=position; i<size-1; i++){
        arr[i]=arr[i+1];
    }
    for(int i=0; i<size-1; i++){
        cout<<arr[i]<<" ";
    }
}