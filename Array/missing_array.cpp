#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,5};
    int size=4;
    int n=size;
    //int n=size-1;
    int XOR1=0;
    int XOR2=0;

    for(int i=0; i<n; i++){
        XOR1=XOR1^arr[i];
        XOR2=XOR2^(i+1);
    }
    XOR1=XOR1^(n+1);
    
    cout << (XOR1 ^ XOR2);

}