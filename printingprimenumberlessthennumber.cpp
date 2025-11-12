#include<iostream>
using namespace std;
int main () {
    int upperrange;
    cout<<"Enter the number: ";
    cin>>upperrange;
    for(int i = 2; i < upperrange; i++){
        int isprime = 0;
        for(int j = 2; j< i; j++){
            if(i%j==0){
                isprime++;
            }
        }
        if(isprime==0){
            cout<< i <<" ";
        }
    }

}