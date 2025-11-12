#include<iostream>
using namespace std;
int main () {
    int a;
    int rev = 0;
    cout<<"Enter Your Armstrong Number: ";
    cin>>a;
    int num = a;
    while (a!=0){
        int rem = a%10;
        rev = rev + rem*rem*rem;
        a = a/10;
    }
    if(num==rev){
        cout<<"This is a armstrong number: ";
    }else {
        cout<<"This is not a armstrong number: ";
    }
    
}