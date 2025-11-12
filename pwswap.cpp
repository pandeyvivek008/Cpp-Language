#include<iostream>
using namespace std;
int main () {
    int a,b;
    cout<<"Enter Your Number a: ";
    cin>>a;
    cout<<"Enter Your Number b: ";
    cin>>b;

    int c;
    c=b;
    b=a;
    a=c;

    cout<<"Your Oputput a: "<<a<<endl;
    cout<<"Your Oputput b: "<<b<<endl;

}