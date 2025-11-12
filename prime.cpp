#include <iostream>
using namespace std;
int main () {
    int lowerlimit;
    int upperlimit;
    cout<<"Enter Your Lower Limit: ";
    cin>>lowerlimit;
    cout<<"Enter Your Upper Limit: ";
    cin>>upperlimit;
    for(int j=lowerlimit;j<=upperlimit;j++){
    int num=j;
    int prime=0;
    for(int i=2; i<num; i++) {
        if(num%i==0) {
           prime++; 
        }  
    }
    if(prime==0){
        cout<<j<<" ";
    }
    
    }
    
}