#include<iostream>
using namespace std;
int main(){
    int matrix[3][3] = {{0,1,0},{0,1,1},{1,1,1}};
    int ans=0;

    for(int i=0; i<3; i++){
        int rowones=0;
        for(int j=0; j<3; j++){
            if(matrix[i] [j]==1){
                rowones++;
            }
            if(ans<rowones){
                ans=i;
            }
        }
    }
    cout<<ans;
}