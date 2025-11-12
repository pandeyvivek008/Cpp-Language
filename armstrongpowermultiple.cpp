#include<iostream>
using namespace std;
int main () {
    for(int i=1; i<=500; i++){
    int num1 = i;
    int num2=num1;
    int num=num1;
    int armstrong = 0;
    int digit = 0;
    while (num1!=0){
        digit++;
        num1 = num1/10;
    }
    while(num2!=0){
    int rem=num2%10;
    int newnum =1;
    for( int i=1; i<=digit; i++){
        newnum = newnum * rem;  
    } 
    num2=num2/10;
    armstrong = armstrong + newnum;
    } 
    if(num==armstrong){
      cout<<num<<" ";
    }
    
    }
    
}
