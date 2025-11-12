#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void countingSort(vector<int>& arr) {
    int n = arr.size();

    // Find max element
    int maxVal = *max_element(arr.begin(), arr.end());

    // Create count array
    vector<int> count(maxVal + 1, 0);

    // Count frequency
    for (int num : arr)
        count[num]++;

    // Prefix sum (cumulative frequency)
    for (int i = 1; i <= maxVal; i++)
        count[i] += count[i - 1];

    // Output array
    vector<int> output(n);
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // Copy back
    arr = output;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    countingSort(arr);

    cout << "Sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
