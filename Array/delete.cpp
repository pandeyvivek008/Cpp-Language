#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int target=2;

    for(int i=0; i<size; i++){
        if(arr[i]==target){
            arr[i]=0;
        }
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}