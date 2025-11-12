#include<iostream>
using namespace std;
int main(){
    int arr[]={1,9,3,4,6,8,9,7,2,4,5,6,3};
    int size=5;
    int target=3;

    for(int i=0; i<size; i++){
        if(arr[i]==target){
            cout<<"Here is output: "<<i<<endl;
        }
    }
}