#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,2,2,2,3,3};
    int size=7;
    int i=0;
    for(int j=1; j<size; j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    cout << "Unique elements count: " << i+1 << endl;

    cout << "Array after removing duplicates: ";
    for(int k=0; k<=i; k++){
        cout << arr[k] << " ";
    }
    cout << endl;
}
