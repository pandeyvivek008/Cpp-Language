#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,2,2,3,3,4,4};
    int size=7;
    int XOR=0;

    for(int i=0; i<size; i++){
        XOR = XOR ^ arr[i];
    }
    cout<<XOR;
}