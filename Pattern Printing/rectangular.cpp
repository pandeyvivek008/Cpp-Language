#include<iostream>
using namespace std;
int main() {
    int n,m;
    cout<<"Enter a number of N: ";
    cin>>n;
    cout<<"Enter a number of M: ";
    cin>>m;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            cout<<"*";
        }  
        cout<<endl;
    }
    
}