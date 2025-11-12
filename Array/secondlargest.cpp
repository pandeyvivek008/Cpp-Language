#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,7,7,5};
    int size=6;
    int largest=arr[0];
    int second_largest=-1;

    for(int i=0; i<size; i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }else if(arr[i]<largest && arr[i]>second_largest){
            second_largest=arr[i];
        }
    }
    cout<<second_largest;
}