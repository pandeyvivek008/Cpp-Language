#include<iostream>
#include<vector>
using namespace std;
int main () {
  
    
    int arr[] = {1,2,3,4,5};

    bool sortedflag = true;

    for(int i=1; i<5; i++) {
        if(arr[i]<= arr[i-1]) {
            sortedflag = false;
        }
    }
    cout<<sortedflag<<endl;
}