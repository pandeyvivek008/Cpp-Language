#include<iostream>
#include<vector>
using namespace std;
int main () {
    vector<int> v(6);

    for(int i=0; i<(int)v.size(); i++) {
        cin>>v[i];
      }
    cout<<"Enter a x: ";
    int x;
    cin>>x;

    int occurrences = 0;

    for(int ele:v) {
          if(ele==x){
            occurrences++;
          }
    }
    cout<<occurrences<<endl;
}