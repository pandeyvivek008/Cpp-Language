#include<iostream>
using namespace std;
int main () {
    int num1;
    int num2;
    int hcf = 0;
    int small = 0;
    cout<<"Enter Your Number 1: ";
    cin>>num1;
    cout<<"Enter Your Number 2: ";
    cin>>num2;
     if(num1<num2){
        small=num1;
     }
     else{
        small=num2;
     }
     for(int i=1; i<=small; i++){
             if(num1%i==0 && num2%i==0){
                     hcf = i;
             }
     }
     cout<<"Here is your output: "<<hcf;
     
}