#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout<<"Enter a n number of array: ";
    cin>>n;
    

    // (n+1) index -> 0 1 2 3 4 5 6, 
    //vector -> 0 x1 x2

    // 0 based indexing -> 0..... n-1
    // 1 based indexing -> 1..... n

    vector<int> v(n+1,0);
    for(int i=1; i<=n; i++) {
        cin>>v[i];
    }

    //Calculate perfix sum array
    for(int i=1; i<=n; i++) {
        v[i]+=v[i-1];
    }

    int q;
    cout<<"Enter a query number: ";
    cin>>q;

    while(q--) {
        int l,r;
        cout<<"Enter a l: ";
        cin>>l;
        cout<<"Enter a r: ";
        cin>>r;
        
        int ans=0;
        //ans = perfixsumarray[r] - perfixsumarray[l-r]
        ans = v[r]-v[l-1];
        cout<<ans<<endl;
    }
}