#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,0,1,1,1,0,1,1};
    int size=9;
    int maxi=0;
    int count=0;

    for(int i=0; i<size; i++){
        if(arr[i]==1){
            count++;
            maxi=max(maxi,count);
        }else{
            count=0;
        }
    }
    cout<<maxi;
}