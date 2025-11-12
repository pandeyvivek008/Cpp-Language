#include<iostream>
using namespace std;
int main () {
    int arr[] = {3,8,11,9,5};
    int key = 11;
    int ans = -1;

    for(int i=0; i<5; i++) {
        if(arr[i]==key) {
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
}