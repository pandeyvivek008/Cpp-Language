/* Q:- Given a boolean 2D array, where each row is sorted. Find the row with the maximum number of 1s.
     Input:- row=3 , col=4
     matrix[]={{0,1,1,1},{0,0,0,1}, {0,0,0,1}} 
     Output:- 0 */

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int leftMostOneRow(vector<vector<int> > &v){
    int leftMostOne = -1;
    int maxOnesRow = -1;
    int j = v[0].size()-1;
    
    //finding leftmost one in 0th row
    while(j>=0 && v[0] [j]==1){
        leftMostOne = j;
        maxOnesRow = 0;
        j--;
    }

    //check in rest of the row if we can find a one left to the leftMostOnes
    for(int i=1; i<(int)v.size(); i++){

        while(j>=0 && v[i] [j]==1){
            leftMostOne = j;
            j--;
            maxOnesRow = i ;
        }
    }
    return maxOnesRow;
}

int maximumOnesRow(vector<vector<int> > &v){
    int maxOnes=INT_MIN;
    int maxOnesRow = -1;
    int column = v[0].size();

    for(int i=0; i<(int)v.size(); i++){
        for(int j=0; j<(int)v[i].size(); j++){
            if(v[i] [j]==1){
                int numberOfOnes = column - j;
                if(numberOfOnes > maxOnes){
                    maxOnes = numberOfOnes;
                    maxOnesRow = i;
                }
                break;
            }
        }
    }
    return maxOnesRow;
}

int main() {
      int n,m;
      cin>>n>>m;

      vector<vector<int> > vec(n,vector<int> (m));
      for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>vec[i] [j];
        }
      }
      int res=maximumOnesRow(vec);
      cout<<res<<endl;
}