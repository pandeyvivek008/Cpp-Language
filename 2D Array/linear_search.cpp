#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter a row: ";
    cin>>r;
    int c;
    cout<<"Enter a column: ";
    cin>>c;

    int arr[r] [c];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i] [j];
        }
    }

     int target;
    cout<<"Enter a target value: ";
    cin>>target;


    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(arr[i] [j]==target){
                cout<<"Found";
            }
        }
    }
    
}