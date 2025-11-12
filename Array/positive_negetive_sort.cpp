#include<iostream>
using namespace std;
int main() {
    int arr[]={-1,-2,3,-4,2,1};
    int size=6;
    int j=0;

    for(int i=0; i<size; i++){
        if(arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}