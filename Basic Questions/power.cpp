#include<iostream>
using namespace std;
int main () {
    int num;
    int power;
    int newnum = 1;
    cout<<"Enter Your Number: ";
    cin>>num;
    cout<<"Enter Your Power: ";
    cin>>power;
    for( int i=1; i<=power; i++){
        newnum = newnum * num;
    }
    cout<<"Here is your output: "<<newnum;
}