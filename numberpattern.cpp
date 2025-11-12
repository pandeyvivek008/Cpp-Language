#include<iostream>
using namespace std;
int main () {
    int num = 1;
    cout<<"Enter a number: ";
    int a;
    cin>>a;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=i; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;

    }
    
}