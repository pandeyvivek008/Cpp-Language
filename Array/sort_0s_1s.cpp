#include<iostream>
using namespace std;
int main(){
    int arr[]={0,0,1,1,0};
    int size=5;
    int j=0;

    for(int i=0; i<size; i++){
        if(arr[i]==0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    for(int i=0; i<size; i++){
        cout<<"Here is output: "<<arr[i]<<endl;
    }
}