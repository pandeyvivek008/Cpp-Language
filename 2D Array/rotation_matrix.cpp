/* Q:- Given a square matrix, turn it by 90 degree in a clockwise direction without using any extra space.
Input:- matrix[]= [[1,2,3],[4,5,6][7,8,9]]
Output:- [[7,4,1],[8,5,2],[9,6,3]] */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotateArray(vector<vector<int> > &vec){
    int n = vec.size();
    //transpose
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            swap(vec[i] [j], vec[j] [i]);
        }
    }

    //reverse every roe
    for(int i=0; i<n; i++){
        reverse(vec[i].begin(),vec[i].end());
    }
    return;
}

int main(){
    int n;
    cin>>n;

      vector<vector<int> > vec(n,vector<int> (n));
      for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>vec[i] [j];
        }
      }
      
      rotateArray(vec);
      for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<vec[i] [j]<<" ";
        }cout<<endl;
      }
}