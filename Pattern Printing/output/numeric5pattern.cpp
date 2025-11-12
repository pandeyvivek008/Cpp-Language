#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter a number of N: ";
    cin>>n;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=(n-i); j++) {
            cout<<" ";
        }
        if(i==1) {
            cout<<i;
        }else if (i==n) {
            for(int j=1; j<=(2*i-1); j++) {
                cout<<i;
            }
        }else {
            cout<<i;
            for(int j=1; j<=(2*i-3); j++) {
                cout<<" ";
            }
            cout<<i;
        }
        cout<<endl;
    }
}