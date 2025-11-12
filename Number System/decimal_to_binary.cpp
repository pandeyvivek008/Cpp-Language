#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter a number of N: ";
    cin>>n;
    
    int ans = 0;
    int power = 1;
    while(n>0) {
        int paritydigit = n%2;
        ans += paritydigit*power;
        power *=10;
        n /=2;
    }
    cout<<ans<<endl;
}