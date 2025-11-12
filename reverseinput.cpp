#include<iostream>
using namespace std;
int main () {
    int a;
    int rev = 0;
    cout<<"Enter Your Number: ";
    cin>>a;
    while(a != 0){
        int rem = a % 10;
        rev = rev*10 + rem;
        a = a / 10;
    }
    cout<<"Your Output: "<<rev;
}