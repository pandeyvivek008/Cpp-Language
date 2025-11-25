#include<iostream>
using namespace std;
int main () {
    int num1;
    cout<<"Enter a Number: ";
    cin>>num1;
    for(int j=2;j<num1;j++){
        int num=j;
        int prime=0;
        for(int i=2; i<num; i++) {
            if(num%i==0) {
               prime++; 
            }  
        }
        if(prime==0){
            cout<<j<<" ";
        }
        
        }
}