#include<iostream>
#include<vector>
using namespace std;

int maximumProfit(vector<int> &prices){
         int mini=prices[0];
         int maxProfit=0;
         int n=prices.size();

         for(int i=0; i<n; i++){
            int cost=prices[i]-mini;
            maxProfit=max(maxProfit,cost);
            mini=min(mini,prices[i]);
         }
         return maxProfit;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int>prices(n);
    cout<<"Enter a element: ";
    for(int i=0; i<n; i++){
        cin>>prices[i];
    }

    int profit = maximumProfit(prices);

    cout<<"Maximum Profit: "<<profit<<endl; //(Buy at 1, sell at 6 → profit = 5)
    
}