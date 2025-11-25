#include<iostream>
using namespace std;
int main () {
    int a= 142;
    int sum=0;
    while(a!=0){
        int rem=a%10;
        sum=sum+rem;
        a=a/10;
    }
    cout<<"Your Outpur: "<<sum;
}
