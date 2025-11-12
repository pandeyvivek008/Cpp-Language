#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter a number of N: ";
    cin>>n;
    int reverse=0;

    while(n>0) {
        int remender = n%10;
        reverse = reverse*10 + remender;
        n = n/10;
    }
    cout<<reverse<<endl;
}