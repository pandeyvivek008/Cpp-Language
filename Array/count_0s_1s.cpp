#include<iostream>
using namespace std;
int main() {
    int arr[]={0,0,1,1,0};
    int size=5;
    int zero=0;
    int one=0;

    for(int i=0; i<size; i++){
       if(arr[i]==0){
        zero++;
       }
       if(arr[i]==1){
        one++;
       }
    }
    cout<<"Here is 0's count: "<<zero<<endl;
    cout<<"Here is 1's count: "<<one<<endl;
}