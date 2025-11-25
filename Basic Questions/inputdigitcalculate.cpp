#include<iostream>
using namespace std;
int main () {
    int num;
    int digit = 0;
    cout<<"Enter your Number: ";
    cin>>num;
    while(num!=0){
        digit++;
        num = num/10;
    }
    cout<<"digit: "<<digit;
}