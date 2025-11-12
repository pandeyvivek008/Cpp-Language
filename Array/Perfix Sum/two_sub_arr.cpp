#include <iostream>
#include <vector>
using namespace std;

bool checkPerfixSuffixSum(vector<int> &v) {
    int total_sum=0;
    for(int i=0; i<(int)v.size(); i++){
        total_sum+=v[i];
    }

    int perfix_sum=0;
    for(int i=0; i<(int)v.size(); i++){
        perfix_sum+=v[i];
        int suffix_sum = total_sum - perfix_sum;

        if(suffix_sum==perfix_sum) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin>>n;

    vector<int> v;
    for(int i=0; i<n; i++) {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    cout<<checkPerfixSuffixSum(v)<<endl;
}