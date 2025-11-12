#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int arr[]={1,2,3,4,5};
    int size=5;
    int l=0;
    int r=size-1;
    cout<<"Before reverse"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    while(l<r){
       swap(arr[l],arr[r]);
       l++;
       r--;
    }
    cout<<"\nAfter reverse"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
   
}