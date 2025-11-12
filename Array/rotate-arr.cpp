#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    // int arr[] = {1,2,3,4,5};
    // int size = 5;
    // int k = 2;

    // //k can be greated than n
    // k=k%size;

    // int ansarr[5];
    // int j = 0;

    // //inserting last k element in ans array.
    // for(int i=size-k; i<size; i++) {
    //     ansarr[j++]=arr[i];
    // }

    // //inserting first n-k element in ans array.
    // for(int i=0; i<=size-k; i++){
    //     ansarr[j++]=arr[i];
    // }
    // for(int i=0; i<size; i++) {
    //     cout<<ansarr[i]<<" ";
    // }
    // cout<<endl;


    //Second technique not use in extra memory.

    vector<int> v={1,2,3,4,5};
    int k=3;
    k=k%v.size();

    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin()+k);
    reverse(v.begin()+k, v.begin());

    for(int a:v) {
        cout<<a<<" ";
    }
    cout<<endl;

}