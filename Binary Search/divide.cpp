#include<iostream>
using namespace std;
int main(){
    double ans=0;
    double start=1;
    double end=50;
    double num=5;
    int n=50;

    while(start<=end){
        double mid=start+(end-start)/2;
        if(mid*num==n){
            cout<<mid;
            break;
        }else if(mid*num>n){
            end=mid-1;
        }else{
            ans=mid;
            start=mid+1;
        }
    }
    cout<<ans;
}