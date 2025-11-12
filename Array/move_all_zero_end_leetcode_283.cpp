#include<iostream>
using namespace std;
int main(){
    int arr[]={1,0,2,3,2,0,0,4,5,1};
    int size=10;
    int j=-1;
    
    for(int i=0; i<size; i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
       
    if(j == -1) {
        cout << "No zeros found in the array" << endl;
        return 0;
    }

    for(int i=j+1; i<size; i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}