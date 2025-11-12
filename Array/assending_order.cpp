/* Q:- Take an array as input from the user. Check if the array is sorted in ascending order.
Input: [1, 2, 3, 4, 5]  
Output: Sorted ✅

Input: [1, 4, 3, 2, 5]  
Output: Not Sorted ❌*/

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    bool isSorted=true;
    for(int i=0; i<size-1; i++){
        if(arr[i]>arr[i+1]){
            isSorted=false;
            break;
        }
    }
    if(isSorted){
        cout<<"Sorted"<<endl;
    }else{
        cout<<"Not Sorted"<<endl;;
    }
}