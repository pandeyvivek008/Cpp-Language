#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter a row: ";
    cin>>r;
    int c;
    cout<<"Enter a column: ";
    cin>>c;

    int arr [r] [c];
    int max=arr[0][0];
    

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i] [j];
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    cout<<"Max: "<<max;
}