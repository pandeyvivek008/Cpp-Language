#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

static string p; // global order string

// Custom comparator function
static bool compare(char a, char b) {
    return (p.find(a) < p.find(b));
}

// Function for custom sort
string customSortString(string order, string s) {
    p = order;
    sort(s.begin(), s.end(), compare);
    return s;
}

int main() {
    // Example Input
    string order = "cba";
    string s = "abcd";

    // Function Call
    string result = customSortString(order, s);

    cout << "Custom sorted string = " << result << endl;

    return 0;
}
