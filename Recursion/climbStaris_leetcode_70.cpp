#include<iostream>
using namespace std;

int climbStairs(int n){
    //base case
    if(n==1)
    return 1;

    if(n==2)
    return 2;

    //recursive case
    int ans=climbStairs(n-1)+climbStairs(n-2);
    return ans;
}
int main(){
    int n;
    cout<<"Enter a number of stairs: ";
    cin>>n;

    int result = climbStairs(n);
    cout<<result<<endl;
}