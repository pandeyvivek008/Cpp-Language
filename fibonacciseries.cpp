#include<iostream>
using namespace std;
int main () {
    int term;
    cout<<"Enter your number: ";
    cin>>term;
    int a=0;
    int b=1;
    for(int i=1; i<=term; i++){
        int c=a+b;
        cout<<a<<" ";
        a=b;
        b=c;
    }
}