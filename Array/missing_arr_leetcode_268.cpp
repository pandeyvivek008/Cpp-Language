//leetcode-268 problem

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,4,5,6,7,2,0,9,10};
    int size=10;
    int sum=(size*(size+1))/2;
    int arr_sum=0;

    for(int i=0; i<size; i++){
        arr_sum+=arr[i];
    }
    cout<< sum - arr_sum;
}