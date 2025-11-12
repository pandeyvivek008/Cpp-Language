#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> superiorElements(vector<int> &arr){
    vector<int> ans;
    int maxi=INT_MIN;
    int n=arr.size();

    for(int i=n-1; i>=0; i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
        }
        maxi=max(maxi,arr[i]);
    }

    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    vector<int>arr(n);

    cout<<"Enter an element: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    vector<int> result = superiorElements(arr);

    cout << "Superior elements: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
}