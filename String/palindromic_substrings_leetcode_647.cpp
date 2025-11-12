#include<iostream>
#include<string>
using namespace std;

    int expend(string s, int i, int j, int n){
            int count=0;
            while(i>=0 && j<n && s[i]==s[j]){
                count++;
                i--;
                j++;
            }
            return count;
        }

    int countSubstrings(string s) {
        int n=s.size();
        int total_count=0;
        for(int center=0; center<n; center++){
            int oddAns=expend(s,center,center,n);
            int evenAns=expend(s,center,center+1,n);
            total_count+=oddAns+evenAns;
        }
        return total_count;
    }
    
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;

    cout << "Total palindromic substrings: " << countSubstrings(s) << endl;


}