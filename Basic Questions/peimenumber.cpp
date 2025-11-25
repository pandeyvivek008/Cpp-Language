#include<iostream>
using namespace std;
int main () {
    int a;
    int prime = 0;
    cout<<"Enter Your Number: ";
    cin>>a;
    for(int i=2; i<a; i++) {
        if(a%i==0){
            prime++;
        }
    }
    if (prime==0){
        cout<<"Number is Prime"<<endl;
    }else {
        cout<<"Number is not prime"<<endl;
    }
}