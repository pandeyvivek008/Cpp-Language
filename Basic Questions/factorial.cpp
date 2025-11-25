#include<iostream>
using namespace std;
int main () {
    int num;
    int fact = 1;
    cout<<"Enter Your Number: ";
    cin>>num;
    for(int i=0; i<num; i++){
        fact = fact * (num - i);
    }
    cout<<"Here is your output: "<<fact;
}