#include <iostream>
#include <vector>
#include <string>
using namespace std;

int garbageCollection(vector<string>& garbage, vector<int>& travel) {
    int pickT = 0;   // total pickups
    int travelT = 0; // total travel time
    int lastP = 0, lastG = 0, lastM = 0;

    // Count garbage pickups and mark last index of each type
    for (int i = 0; i < (int)garbage.size(); i++) {
        for (char ch : garbage[i]) {
            if (ch == 'P') {
                pickT++;
                lastP = i;
            } else if (ch == 'G') {
                pickT++;
                lastG = i;
            } else if (ch == 'M') {
                pickT++;
                lastM = i;
            }
        }
    }

    // Travel time for paper truck
    for (int i = 0; i < lastP; i++) {
        travelT += travel[i];
    }
    // Travel time for glass truck
    for (int i = 0; i < lastG; i++) {
        travelT += travel[i];
    }
    // Travel time for metal truck
    for (int i = 0; i < lastM; i++) {
        travelT += travel[i];
    }

    int ans = pickT + travelT;
    return ans;
}

int main() {
    // Example Input
    vector<string> garbage = {"G", "P", "GP", "GG"};
    vector<int> travel = {2, 4, 3};

    int result = garbageCollection(garbage, travel);

    cout << "Minimum time to collect garbage = " << result << endl;

    return 0;
}
