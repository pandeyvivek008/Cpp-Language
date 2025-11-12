#include<iostream>
using namespace std;
int main() {
    int arr[6]={1,2,3,4,5};
    int size=6;
    int position=4;
    int target=6;

    for(int i=size-1; i>position; i--){
          arr[i]=arr[i-1];
        }
    arr[position]=target;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}