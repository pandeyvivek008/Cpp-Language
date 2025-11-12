#include<iostream>
using namespace std;
int main () {
    int term;
    cout<<"Enter your number: ";
    cin>>term;
    int a=0;
    int b=1;
   int nthSequence;
    for(int i=1; i<=term; i++){
        int c=a+b;
        nthSequence=a;
        a=b;
        b=c;
    }
    cout<<nthSequence;
}