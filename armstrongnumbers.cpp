#include<iostream>
using namespace std;
int main () {
    int a = 153;
    int num=a;
    int rev = 0;
    while(a!=0){
        int rem = a%10;
        rev = rev + rem*rem*rem;
        a=a/10;
    }
    if(num==rev){
        cout<<"Number is armstrong";
    }
    else{
        cout<<"Number is not a armstrong";
    }
}