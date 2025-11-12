#include<iostream>
using namespace std;
int main() {
    int r;
    cout<<"Enter a row: ";
    cin>>r;
    int c;
    cout<<"Enter a column: ";
    cin>>c;

    int arr [r] [c];
    

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i] [j];
        }
    }

    for(int j=0; j<c; j++){
        int sum=0;
        for(int i=0; i<r; i++){
            sum = sum + arr[i] [j];
        }
        cout<<"Here is output for column "<<j+1<<": "<<sum<<endl;
    }
}