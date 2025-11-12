#include<iostream>
using namespace std;
int main(){
    int arr[]={7,6,3,4,5};
    int size=5;
    int min=arr[0];

    for(int i=0; i<size; i++) {
        if(arr[i]< min){
            min=arr[i];
        }
    }
    cout<<"Min: "<<min<<endl;
}