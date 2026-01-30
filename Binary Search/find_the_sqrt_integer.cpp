#include <iostream>
using namespace std;

// Function to find floor square root of n
int floorSqrt(int n) {

    // Binary search range
    int low = 1, high = n;

    // Loop until search space is valid
    while (low <= high) {

        // Find middle safely (avoid overflow)
        long long mid = low + (high - low) / 2;

        // Square of mid (long long to avoid overflow)
        long long val = mid * mid;

        // If mid^2 is less than or equal to n
        // then mid can be a possible answer
        if (val <= n) {
            low = mid + 1;   // try to find a bigger value
        } 
        // If mid^2 is greater than n
        else {
            high = mid - 1;  // move to smaller values
        }
    }

    // When loop ends, high will store floor(sqrt(n))
    return high;
}

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = floorSqrt(n);

    cout << "Floor square root of " << n << " is: " << result << endl;

    return 0;
}
