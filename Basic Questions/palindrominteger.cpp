#include<iostream>
using namespace std;
int main () {
    int num;
    int num1;
    int rev = 0;
    cout<<"Enter Your Number: ";
    cin>>num;
    num1=num;
    while(num!=0){
        int rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }
    if(num1==rev){
        cout<<"This is a palindrom.";
    }
    else{
        cout<<"This is not a palindrom.";
    }
}