#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function for Bucket Sort
void bucketSort(vector<float>& arr) {
    int n = arr.size();
    vector<vector<float>> buckets(n);

    // Put array elements into different buckets
    for (int i = 0; i < n; i++) {
        int index = n * arr[i]; // bucket index
        buckets[index].push_back(arr[i]);
    }

    // Sort each bucket
    for (int i = 0; i < n; i++) {
        sort(buckets[i].begin(), buckets[i].end());
    }

    // Concatenate all buckets
    int idx = 0;
    for (int i = 0; i < n; i++) {
        for (float val : buckets[i]) {
            arr[idx++] = val;
        }
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<float> arr(n);
    cout << "Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bucketSort(arr);

    cout << "Sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
