#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter Your Number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int k=1; k<=n-i;k++){
            cout<<" ";
        }
        for(int j=1; j<=i*2-1; j++){
            cout<<"*";
        }
           cout<<endl;
    }
}