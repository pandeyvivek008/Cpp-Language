#include<iostream>
#include<vector>
#include<unordered_set>   //  Needed for unordered_set
using namespace std;

int longestSuccessiveElements(vector<int> &arr){
    int n = arr.size();
    if(n == 0) return 0;
    
    int longest = 1;
    unordered_set<int> st;

    // Insert all elements in set
    for(int i = 0; i < n; i++){
        st.insert(arr[i]);
    }

    // Check sequence starting from each number
    for(auto it: st){
        // Only start counting if previous element doesn't exist
        if(st.find(it - 1) == st.end()){
            int cnt = 1;
            int x = it;
            while(st.find(x + 1) != st.end()){
                x = x + 1;
                cnt = cnt + 1;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;
}

int main(){
    vector<int> arr = {100, 200, 1, 2, 3, 4}; 
    cout << "Longest Consecutive Sequence Length: " 
         << longestSuccessiveElements(arr) << endl;
    return 0;
}
