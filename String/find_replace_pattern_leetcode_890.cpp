#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*noteआपने array को mapping[ch] से access किया, जहाँ ch char है।
C++ में char signed/unsigned दोनों हो सकता है (compiler पर depend करता है)। अगर ch negative हुआ तो undefined behaviour हो सकता है।
Fix: unsigned char cast कर दो*/

class Solution {
public:

    void createUpdateMapping(string & str) {
        // mapping
        char start = 'a';
        char mapping[300] = {0};

        for (auto ch : str) {
            if (mapping[(unsigned char)ch] == 0) {
                mapping[(unsigned char)ch] = start;
                start++;
            }
        }

        // update the string
        for (int i = 0; i < (int)str.length(); i++) {
            char ch = str[i];
            str[i] = mapping[(unsigned char)ch];
        }
    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;

        // normalize the pattern
        createUpdateMapping(pattern);

        for (string s : words) {
            string tempString = s;
            createUpdateMapping(tempString);
            if (tempString == pattern) {
                ans.push_back(s);
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;

    vector<string> words = {"abc","deq","mee","aqq","dkd","ccc"};
    string pattern = "abb";

    vector<string> result = sol.findAndReplacePattern(words, pattern);

    cout << "Words matching the pattern are: ";
    for (auto &word : result) {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}
