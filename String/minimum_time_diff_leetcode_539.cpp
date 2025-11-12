#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int size = timePoints.size();

        // Optimization: max unique minutes in a day = 1440
        if (size > 1440) return 0;

        vector<int> minutes(size);

        // Convert each HH:MM to total minutes
        for (int i = 0; i < size; i++) {
            string s = timePoints[i];
            string h = s.substr(0, 2);
            string m = s.substr(3, 2);
            minutes[i] = stoi(h) * 60 + stoi(m);
        }

        // Sort times
        sort(minutes.begin(), minutes.end());

        int miniDiff = INT_MAX;

        // Adjacent differences
        for (int i = 1; i < size; i++) {
             if (minutes[i] - minutes[i - 1] < miniDiff) {
                miniDiff = minutes[i] - minutes[i - 1];
            }
        }

        // Across midnight
        miniDiff = min(miniDiff, (1440 - minutes[size - 1] + minutes[0]));

        return miniDiff;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<string> timePoints = {"23:59", "00:00", "12:30"};

    int result = sol.findMinDifference(timePoints);

    cout << "Minimum time difference = " << result << " minutes" << endl;

    return 0;
}
