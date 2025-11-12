#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector <int> v(6);

    for(int i=0; i<(int)v.size(); i++){
        cin>>v[i];
    }
    cout<<"Enter a x: ";
    int x;
    cin>>x;

    int count = 0;
    for(int i=0; i<(int)v.size(); i++) {
        if(v[i]>x){
            count++;
        }
    }
    cout<<count<<endl;
}