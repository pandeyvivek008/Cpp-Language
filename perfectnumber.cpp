#include<iostream>
using namespace std;
int main () {
    int num;
    int sod = 0;
    cout<<"Enter Your NUmber: ";
    cin>>num;
    for(int i=1; i<num; i++) {
        if(num%i==0){
            sod = sod+i;
        }
    }
    if(sod==num) {
        cout<<"Perfect Number.";
    }
    else{
        cout<<"Not a Perfect Number.";
    }
}