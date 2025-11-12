#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,7,7,5};
    int size=6;
    int largest=arr[0];
    int slargest=-1;
    
    for(int i=0; i<size; i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }else if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }
    cout<<slargest;
}
