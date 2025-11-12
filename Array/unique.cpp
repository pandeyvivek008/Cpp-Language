#include<iostream>
using namespace std;
int main() {
    int arr[]={2,4,4,5,2};
    int size=5;
    int ans=0;

    for(int i=0; i<size; i++){
        ans = ans ^ arr[i];
    }
    cout<<ans;
}