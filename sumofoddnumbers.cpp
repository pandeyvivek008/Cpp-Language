#include<iostream>
using namespace std;
int main () {
    int lowerrange;
    int upperrange;
    cout<<"Enter lowerrange: ";
    cin>>lowerrange;
    cout<<"Enter Upperrange: ";
    cin>>upperrange;
    int sum = 0;
    for(int i=lowerrange; i<=upperrange; i++){
        if(i%2!=0){
            sum = sum + i;
        }
    }
    cout<<"Here is output: "<<sum;
}