#include<iostream>
using namespace std;
int main (){
int num;
int power;
int newnum = 1;
cout<<"Enter a number of num(a): ";
   cin>>num;
cout<<"Enter a number of power(b): ";
   cin>>power;

   for(int i=1; i<=power; i++){
       newnum = newnum * num;
   }
   cout<<newnum<<endl;
}