#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter a row: ";
    cin>>r;
    int c;
    cout<<"enter a column: ";
    cin>>c;

    int arr [r] [c];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i] [j];
        }
    }

    for(int i=0; i<r; i++){
        cout<<arr[i][i]<<" ";
    }
}