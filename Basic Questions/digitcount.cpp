#include<iostream>
using namespace std;
int main () {
    int num;
    int digit = 0;
    cout<<"Enter your number: ";
    cin>>num;
    while(num!=0){
          digit++;
          num = num/10;
    }
    cout<<"Here is your output: "<<digit;
}