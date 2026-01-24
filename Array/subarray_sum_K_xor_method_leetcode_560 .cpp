#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr = {4, 2, 2, 6, 4};
    int k = 6;

    map<int, int> mpp;   // prefixXOR -> frequency
    int xr = 0;          // prefix XOR
    int cnt = 0;         // answer

    mpp[0] = 1;          // very important (empty prefix)

    for(int i = 0; i < (int) arr.size(); i++) {

        xr = xr ^ arr[i];        // update prefix XOR

        int need = xr ^ k;       // required previous XOR

        cnt += mpp[need];        // add how many times found

        mpp[xr]++;               // store current XOR
    }

    cout << "Number of subarrays with XOR = " << k << " is: " << cnt << endl;

    return 0;
}
