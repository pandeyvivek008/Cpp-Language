#include<iostream>
using namespace std;
int main(){
    int lo=0;
    int hi=10;
    int ans=-1;

    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if((mid*mid)<10){
            ans=mid;
            lo=mid+1;
        }else{
            hi=mid-1;
        }
    }
    cout<<ans;
}