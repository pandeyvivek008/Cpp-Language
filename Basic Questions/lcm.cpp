#include<iostream>
using namespace std;
int main () {
    int num1;
    int num2;
    int big;
    int lcm;
    cout<<"Enter Your Number 1: ";
    cin>>num1;
    cout<<"Enter Your Number 2: ";
    cin>>num2;
    if(num1>num2){
        big=num1;
    }else {
        big=num2;
    }
    int multiply=num1*num2;
    for(int i=big; i<=multiply; i++){
        if(i%num1==0 && i%num2==0){
            lcm=i;
            break;
        }
    }
    
    cout<<"Here is your lcm : "<<lcm;
}