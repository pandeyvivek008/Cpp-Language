/*Leetcode:- 2149. Rearrange Array Elements by Sign
Input: nums = [3,1,-2,-5,2,-4]
Output: [3,-2,1,-5,2,-4] */

#include<iostream>
using namespace std;
int main(){
    int arr[]={3,1,-2,-5,2,-4};
    int size=6;
    int ans[6];
    int p=0;
    int n=1;
    int i=0;

    while(i<size){
        if(arr[i]>0){
            ans[p]=arr[i];
            p+=2;
        }else{
            ans[n]=arr[i];
            n+=2;
        }
        i++;
    }
    for(int i=0; i<size; i++){
        cout<<ans[i]<<" ";
    }
}