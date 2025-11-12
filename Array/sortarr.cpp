#include<iostream>
using namespace std;
int main(){
int arr[]={1,2,1,3,4};
int size=5;

for(int i=1; i<size; i++){
    if(arr[i]>=arr[i-1]){
        
    }else{
        cout<<"False";
        return false;
    }
  }
  cout<<"True";
  return true;
}